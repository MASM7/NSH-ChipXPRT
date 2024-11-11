`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 05:32:54 PM
// Design Name: 
// Module Name: tb_full_adder
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module tb_full_adder;

    // Declare testbench signals
    logic a, b;
    logic c_in, c1, c2, c_out;
    logic s1, s_out;
    
    // Instantiate the andgate module
//    half_adder dut1 (
//        .a(a),
//        .b(b),
//        .f(s_out),
//        .c(c_out)
//    );
    
//    half_adder dut2 (
//        .a(s1),
//        .b(c_in),
//        .s(s_out),
//        .c(c_out)
//    );

    // Half-adder 1
    andgate dut1 (
        .a(a),
        .b(b),
        .f(c1)
    );
    xorgate dut2 (
        .a(a),
        .b(b),
        .f(s1)
    ); 
    // Half-adder 2
    andgate dut3 (
        .a(s1),
        .b(c_in),
        .f(c2)
    );
    xorgate dut4 (
        .a(s1),
        .b(c_in),
        .f(s_out)
    ); 
    // Or gate
    orgate dut5 (
        .a(c1),
        .b(c2),
        .f(c_out)
    );
     

    // Testbench Logic
    initial begin
        // Display header
        $display("Time\t a\t b\t c_in\t s_out\t c_out");
        $display("------------------------------------------");
        
        // Apply test vectors with $display statements
        // Case 1
        a = 0; b = 0; c_in = 0; #10;
        // Display the value of a, b, and f alog with time
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 2
        a = 0; b = 0; c_in = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 3
        a = 0; b = 1; c_in = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 4
        a = 0; b = 1; c_in = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 5
        a = 1; b = 0; c_in = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 6        
        a = 1; b = 0; c_in = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 7
        a = 1; b = 1; c_in = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
        // Case 8
        a = 1; b = 1; c_in = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c_in, s_out, c_out);
    
        // End simulation
        $finish;    
    end
endmodule