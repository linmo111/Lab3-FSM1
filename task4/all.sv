module all (
    input logic clk,
    input logic rst,
    input logic en,
    input logic trigger,
   // input logic fade,
    output logic [8:1] data_out,
   // output logic [7:1] rand_out
    output logic time_out
);
    logic tick;
    logic cmd_delay;
    logic cmd_seq;
   // logic time_out;
    logic muxout;
    logic [7:1] lfsrOut;

mux mux(
    .a(tick),
    .b(time_out),
    .sel(cmd_seq),
    .out(muxout)
);

delay delay(
    .time_out(time_out),
    .trigger(cmd_delay),
    .rst(rst),
    .clk(clk),
    .n(lfsrOut)
    
);

lfsr lfsr(
    .en(1),
    .rst(rst),
    .lfsr_out(lfsrOut),
   // .lfsr_in(1),
    .clk(clk),
  //  .rand_out(rand_out)


);


clktick clktick(
    .clk(clk),
    .en(cmd_seq),
    .rst(rst),
    .N(6'd40),
    .tick(tick)
);

f1_fsm f1(
    .clk(clk),
    .en(muxout),
    .rst(rst),
   // .fade(fade),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_delay(cmd_delay),
    .cmd_seq(cmd_seq)
);
endmodule
