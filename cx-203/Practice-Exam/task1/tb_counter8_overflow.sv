`timescale 1ns / 1ps
 

module tb_counter8_overflow;

logic clk, reset, count_7, q, overflow;


counter8_overflow counter8_overflow_inst(
    .clk(clk),
    .reset(reset),
    .count_7(count_7),
    .q(q),
    .overflow(overflow)
);

    // Initial block to apply stimulus
    initial begin
        // Monitor signals
//        $monitor("Time=%0t | clk=%b | reset=%b | RO=%b", $time, clk, reset, RO);
        $monitor("Time=%0t | clk=%b | reset=%b | count_7=%b | q=%b | overflow=%b", $time, clk, reset, count_7, q, overflow);

        // Initial values
        clk = 0; reset = 0; 
        
        // Test sequence
        #10 clk = 1; reset = 1;
        #10 clk = 0;
        #10 clk = 1; count_7 = 0;
        #10 clk = 0;
        #10 clk = 1; count_7 = 1;
        #10 clk = 0;
        #10 clk = 1; count_7 = 0;
        #10 clk = 0;
        #10 clk = 1; count_7 = 1;
        #10 clk = 0;

                                                
        #10 $finish;            // End simulation
    end

endmodule
