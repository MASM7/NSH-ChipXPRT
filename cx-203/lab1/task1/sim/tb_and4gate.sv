`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 02:15:24 PM
// Design Name: 
// Module Name: tb_and4gate
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


module tb_and4gate;
    // Declare testbench signals
    logic a, b, c, d;
    logic w1, w2;
    logic f;
    // Instantiate the andgate module
    andgate dut1 (
        .a(a),
        .b(b),
        .f(w1)
    );
    andgate dut2 (
        .a(c),
        .b(d),
        .f(w2)
    );
    andgate dut3 (
        .a(w1),
        .b(w2),
        .f(f)
    );
    
    // Testbench Logic
    initial begin
        // Display header
        $display("Time\t a\t b\t c\t d\t f");
        $display("------------------------");
        
        // Apply test vectors with $display statements
        // Case 1
        a = 0; b = 0; c = 0; d = 0; #10;
        // Display the value of a, b, and f alog with time
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 2
        a = 0; b = 0; c = 0; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 3
        a = 0; b = 0; c = 1; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 4
        a = 0; b = 0; c = 1; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 5
        a = 0; b = 1; c = 0; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 6
        a = 0; b = 1; c = 0; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 7
        a = 0; b = 1; c = 1; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 8
        a = 0; b = 1; c = 1; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 9
        a = 1; b = 0; c = 0; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 10
        a = 1; b = 0; c = 0; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 11
        a = 1; b = 0; c = 1; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 12
        a = 1; b = 0; c = 1; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 13
        a = 1; b = 1; c = 0; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 14
        a = 1; b = 1; c = 0; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 15
        a = 1; b = 1; c = 1; d = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        // Case 16
        a = 1; b = 1; c = 1; d = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b\t %b", $time, a, b, c, d, f);
        
        // End simulation
        $finish;
    end
    
endmodule