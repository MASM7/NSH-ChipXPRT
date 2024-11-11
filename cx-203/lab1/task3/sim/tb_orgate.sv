`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 05:15:33 PM
// Design Name: 
// Module Name: tb_orgate
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


module tb_orgate;
    // Declare testbench signals
    logic a, b;
    logic f;
    // Instantiate the andgate module
    orgate dut (
        .a(a),
        .b(b),
        .f(f)
    );

    // Testbench Logic
    initial begin
        // Display header
        $display("Time\t a\t b\t f\t");
        $display("------------------------");
        
        // Apply test vectors with $display statements
        // Case 1
        a = 0; b = 0; #10;
        // Display the value of a, b, and f alog with time
        $display("%0t\t %b\t %b\t %b", $time, a, b, f);
        // Case 2
        a = 0; b = 1; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, f);
        // Case 3
        a = 1; b = 0; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, f);
        // Case 4
        a = 1; b = 1; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, f);

        
        // End simulation
        $finish;
    end
    
endmodule