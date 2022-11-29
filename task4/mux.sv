module mux(
    input logic a,
    input logic b,
    input logic sel,
    output logic out
);
    always_comb begin
        if (sel)
            out<=a;
        else
            out<=b;
    end


endmodule
