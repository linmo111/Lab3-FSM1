#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlfsr* top = new  Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open("counter.vcd");
   

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // init Vbuddy
    if (vbdOpen()!=1)  return(-1);
    vbdHeader("Lab 3: lfsr");
    vbdSetMode(1);

    // run simulation for many clock cycles
    for (i=0; i<300; i++){
        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
            tfp->dump(2*i+clk);
            top->clk = !top->clk; // toggle clock up and down
            top->eval();
        }

        // Send count value to Vbuddy
        vbdHex(1,int( top->data_out) & 0xF);

        vbdBar(int(top->data_out) & 0xFF);
        vbdCycle(i+1);
        top->data_in=0x01;
        top->en = vbdFlag(); // here || and && same as | and & as comparator returns a boolean value
        // top->en = (i > 4) & !((8 <= i) & (i < 11));
        top->rst = (i<5);
       // top->preset=vbdValue();
        if (Verilated::gotFinish())  exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}