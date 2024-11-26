`timescale 1ns / 1ps
 

module tb_register_xor;

logic clk, reset, en;
logic [7:0] data;
logic [7:0] q; 
logic out;

register_xor register_xor_inst(
    .clk(clk),
    .reset(reset),
    .en(en),
    .data(data),
    .q(q),
    .out(out)
);

    // Initial block to apply stimulus
    initial begin
        // Monitor signals
//        $monitor("Time=%0t | clk=%b | reset=%b | RO=%b", $time, clk, reset, RO);
        $monitor("Time=%0t | clk=%b | reset=%b | en=%b | data=%b | q=%b | out=%b", $time, clk, reset, en, data, q, out);

        // Initial values
        clk = 0; reset = 0; 
        
        // Test sequence
        #10 clk = 1; reset = 1; en = 1;
        #10 clk = 0;
        #10 clk = 1; data[7:0] = 8'b01110001;
        #10 clk = 0;
        #10 clk = 1; data[7:0] = 8'b00010001;
        #10 clk = 0;
        #10 clk = 1; data[7:0] = 8'b01110111;
        #10 clk = 0;
        #10 clk = 1; data[7:0] = 8'b11000001;
        #10 clk = 0;

                                                
        #10 $finish;            // End simulation
    end

endmodule