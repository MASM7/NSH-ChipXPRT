`timescale 1ns / 1ps


module tb_adder8_44;

logic [7:0] A, B, sum;
logic Cin, Cout;

adder8_44 adder8_44_inst(
    .A(A),
    .B(B),
    .sum(sum),
    .Cin(Cin),
    .Cout(Cout)
);

    // Initial block to apply stimulus
    initial begin
        // Monitor signals
//        $monitor("Time=%0t | clk=%b | reset=%b | RO=%b", $time, clk, reset, RO);
        $monitor("Time=%0t | A=%b | B=%b | sum=%b | Cin=%b | Cout=%b", $time, A, B, sum, Cin, Cout);
        
        // Test sequence
        #10 A = 8'b01010001; B = 8'b00011110; Cin = 1'b1;
        #10 A = 8'b01010001; B = 8'b00000010; Cin = 1'b1;
        #10 A = 8'b01010000; B = 8'b01000110; Cin = 1'b0;
        #10 A = 8'b01000001; B = 8'b00001110; Cin = 1'b0;
        #10 A = 8'b01011001; B = 8'b11011110; Cin = 1'b0;
        #10 A = 8'b01111001; B = 8'b10000110; Cin = 1'b0;
        #10 A = 8'b01000011; B = 8'b11011110; Cin = 1'b0;
        #10 A = 8'b01011111; B = 8'b10011110; Cin = 1'b0;
        #10 A = 8'b01010101; B = 8'b10011110; Cin = 1'b0;
        #10 A = 8'b00001111; B = 8'b10011110; Cin = 1'b1;
        #10 A = 8'b00000011; B = 8'b00011110; Cin = 1'b1;


                                                
        #10 $finish;            // End simulation
    end

endmodule
