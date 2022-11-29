#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vall.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;
  int lfsr_in=7;
  int lights = 0;
  int lastclkfaded=0;
  int trigger; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vall * top = new Vall;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("delay.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T2:Delay");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->trigger = 0;
  //top->fade=0;
 // top->wait=0;

  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display toggle neopixel
    // vbdHex(4,int(top->rand_out & 0xFF));
    // vbdHex(3,int(top->rand_out & 0xFF));
    // vbdHex(2,int(top->rand_out & 0xFF));
    // vbdHex(1,int(top->rand_out & 0xFF));
    vbdBar(int(top->data_out));
    
    // set up input signals of testbench
    top->rst = (simcyc < 2); 
    if (lastclkfaded){
      lastclkfaded=0;
      //top->fade=1;
     // top->wait=1;
      vbdInitWatch();
      vbdHeader("press now!");
      while(!vbdFlag()){

      }
      int num=vbdElapsed();
      vbdHeader("your time is:");
      vbdHex(4,(num>>16 & 0xF));
      vbdHex(3,(num>>8 & 0xF));
      vbdHex(2,(num>>4 & 0xF));
      vbdHex(1,(num & 0xF));
     
      top->trigger = 0;
    }
    else{
      //top->fade=0;
      top->trigger = vbdFlag();
    }   // assert reset for 1st cycle
    if (top->time_out){
      lastclkfaded=1;
    }
    
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
