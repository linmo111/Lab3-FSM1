module all #(
    parameter WIDTH=16
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [WIDTH-1:0] N,
    output logic [8:1] data_out
);
    logic tick;

clktick clktick(
    .clk(clk),
    .en(en),
    .rst(rst),
    .N(N),
    .tick(tick)
);

f1_fsm f1(
    .clk(clk),
    .en(tick),
    .rst(rst),
    .data_out(data_out)
);
endmodule