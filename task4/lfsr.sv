module lfsr(
    input logic clk,
    input logic en,
    input logic rst,

    //input logic [7:1] lfsr_in ,
    output logic [7:1] lfsr_out,
    //output logic [7:1] rand_out 
);

    logic [7:1] sreg;
   // assign sreg = data_in;
    //assign sreg = 1;
    always_ff @(posedge clk) begin
        if (rst)
            sreg <= 1;
        else if (en) begin
       
            sreg[7] <= sreg[6];
            sreg[6] <= sreg[5];
            sreg[5] <= sreg[4];
            sreg[4] <= sreg[3];
            sreg[3] <= sreg[2];
            sreg[2] <= sreg[1];
            sreg[1] <= sreg[1] ^ (sreg[5] ^ sreg[7]);
        end
    end
    assign lfsr_out = {sreg};
   // assign rand_out = {sreg};
endmodule
