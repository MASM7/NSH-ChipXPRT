module d_latch_asyn_rstn(
    input logic clk,
    input logic D,
    input logic reset_n,
    output logic Q, 
    output logic Qn 
);
    logic S, R;

    assign S = D;
    assign R = ~D; //Fixed the error (inverted the data for R)

    logic nand1_o, nand2_o;
    nand (nand1_o, S, clk);
    nand (nand2_o, R, clk);

    logic Q1; //Defined Q1
    nand (Q1, nand1_o, Qn); //Fixed the error (defined the type of Q1 above)
    and (Q, reset_n, Q1); //Fixed the error (the reset should be active low so reset_n instead on ~reset_n)
    nand (Qn, nand2_o, Q);

endmodule                                                                                                                                                            