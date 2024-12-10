module mux2x1(
    input logic S, 
    input logic in1, 
    input logic in2,
    output logic out
);
    assign out = S ? (in2):(in1); //Fixed the error (usually, the second input is the one selected when S is 1)
    
endmodule : mux2x1