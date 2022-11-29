module f1_fsm(
    input logic clk,
    input logic rst,
    input logic en,
    input logic trigger,
    //input logic fade,
   // input logic wait,
    output logic [8:1] data_out,
    output logic cmd_seq,
    output logic cmd_delay,
    //output logic justfaded
);

    typedef enum { S0,S1,S2,S3,S4,S5,S6,S7,S8 } my_state;
    my_state current_state, next_state;

    always_ff @(posedge clk) begin
        if (rst) current_state <= S0;
     //   else if (fade) current_state <= S0;
        else if (trigger) current_state <= S1;
        else if (en)  current_state <=next_state;
        //justfaded <= !cmd_delay & !cmd_seq
    end
    
    always_comb
        case(current_state)
            S0: next_state = S1; 
            S1: next_state = S2; 
            S2: next_state = S3; 
            S3: next_state = S4; 
            S4: next_state = S5; 
            S5: next_state = S6;
            S6: next_state = S7;
            S7: next_state = S8;
            S8: next_state = S0;
            default: next_state = S0;
        endcase
    always_comb
        case(current_state)
            S0: data_out={8'b0};
            S1: data_out={8'b1};
            S2: data_out={8'b11};
            S3: data_out={8'b111};
            S4: data_out={8'b1111};
            S5: data_out={8'b11111};
            S6: data_out={8'b111111};
            S7: data_out={8'b1111111};
            S8: data_out={8'b11111111};
            default: data_out = {8'b0};
        endcase
    always_comb
        case(current_state)
            S0: cmd_seq=0;
            S1: cmd_seq=1;
            S2: cmd_seq=1;
            S3: cmd_seq=1;
            S4: cmd_seq=1;
            S5: cmd_seq=1;
            S6: cmd_seq=1;
            S7: cmd_seq=1;
            S8: cmd_seq=0;
            default: cmd_seq=0;
        endcase
    always_comb
        case(current_state)
            S0: cmd_delay=0;
            S1: cmd_delay=0;
            S2: cmd_delay=0;
            S3: cmd_delay=0;
            S4: cmd_delay=0;
            S5: cmd_delay=0;
            S6: cmd_delay=0;
            S7: cmd_delay=0;
            S8: cmd_delay= 1;
            default: cmd_delay=0;
        endcase
    
endmodule
    //
