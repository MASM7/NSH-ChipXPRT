module d_flipflop(
    input logic clk, 
    input logic D, 
    input logic reset_n,
    output logic Q,
    output logic Qn 
);

logic d_latch0_o;
logic d_latch0_o_n; //defined Qn for the first d-latch
logic d_latch0_clk;
logic d_latch1_clk;

assign d_latch0_clk = clk; //Fixed the error (only one of the two d-latches has not/inverted, it's the second one or slave)
assign d_latch1_clk = ~clk;

d_latch_asyn_rstn d_latch0(
    .clk(d_latch0_clk),
    .D(D),
    .reset_n(reset_n),
    .Q(d_latch0_o),
    .Qn(d_latch0_o_n) //Added Qn for the first latch (master) and moved DFF's Qn to the slave latch
);

d_latch_asyn_rstn d_latch1(
    .clk(d_latch1_clk),
    .D(d_latch0_o),
    .reset_n(reset_n),
    .Q(Q),
    .Qn(Qn) //Fixed the error here (Qn of the DFF is here)
);

endmodule : d_flipflop