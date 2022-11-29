module lfsr(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [4:1] data_in ,
    output logic [4:1] data_out 
);

    logic [4:1] sreg;
   // assign sreg = data_in;
    always_ff @(posedge clk) begin
        if (rst)
            sreg <= data_in;
        else if (en) begin
            sreg[4] <= sreg[3];
            sreg[3] <= sreg[2];
            sreg[2] <= sreg[1];
            sreg[1] <= sreg[3] ^ sreg[4];
        end
    end
    assign data_out = {sreg[4],sreg[3],sreg[2],sreg[1]};
endmodule
