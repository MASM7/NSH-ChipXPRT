// This counter is designed using register, adder and a multiplexer. 
// Normally we don't use this appraoch as this requires more hardware there a simple counter 
// that adds constant value "1'b1".

module counter_4bit ( //fixed this part (there were opened bracket with # symbol but nothing inside for parametrization)
    input logic clk,
    input logic reset_n,
    input logic load,
    input logic [3:0] load_data,
    output logic [3:0] count
);

    logic [3:0] next_count; // Fixed the error here (size of next_count)
    assign next_count = load ? (load_data) : (count + 1); //Fixed this error (swapping the values)

    always @(posedge clk or negedge reset_n)
    begin        
        if(~reset_n) begin //fixed error since we are using negedge reset (it's an error for our active-low FPGA)
            count <= 0;
        end
        else begin
            count <= next_count;
        end
    end

endmodule