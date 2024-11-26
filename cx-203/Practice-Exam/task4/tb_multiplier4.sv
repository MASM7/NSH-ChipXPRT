`timescale 1ns / 1ps


module tb_multiplier4;

logic [3:0] A, B;
logic [7:0] product;

multiplier4 multiplier4_inst(
    .A(A),
    .B(B),
    .product(product)
);

    // Initial block to apply stimulus
    initial begin
        // Monitor signals
//        $monitor("Time=%0t | clk=%b | reset=%b | RO=%b", $time, clk, reset, RO);
        $monitor("Time=%0t | A=%b | B=%b | product=%b", $time, A, B, product);
        
        // Test sequence
        #10 A = 4'b0100; B = 4'b0001;
        #10 A = 4'b0101; B = 4'b0011;
        #10 A = 4'b0111; B = 4'b0110;
        #10 A = 4'b0100; B = 4'b1010;
        #10 A = 4'b0101; B = 4'b1100;
        #10 A = 4'b0111; B = 4'b0110;
        #10 A = 4'b0101; B = 4'b1110;
        #10 A = 4'b0101; B = 4'b1110;
        #10 A = 4'b0101; B = 4'b1010;
        #10 A = 4'b0010; B = 4'b1010;
        #10 A = 4'b0000; B = 4'b0010;


                                                
        #10 $finish;            // End simulation
    end
    
endmodule