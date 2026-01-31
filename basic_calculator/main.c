#include <stdio.h>

// Numbers variables(double[example result: 1.0000000000000000])

struct double_num_variables{
double num1_d, num2_d;    
};

// Operators variables(char[example: +, -, *, etc...])

struct operator_variable{
char op;
};

// Result variable
struct result_variable{
double result;
};


// Calculate [example: 1+1]

void int_calculate(){
struct double_num_variables struct_num;
struct result_variable struct_result;
struct operator_variable struct_op;

// Select num1_d

printf("Select first number: ");
scanf("%lf", &struct_num.num1_d);

// Select Operator input 

printf("Select Operator(+, -, *, /): ");
scanf(" %c", &struct_op.op);

// Select num2_d

printf("Select second number: ");
scanf("%lf", &struct_num.num2_d);

// Calculate conditions

if (struct_op.op == '+') {
struct_result.result = struct_num.num1_d + struct_num.num2_d;
printf("Result: %f\n", struct_result.result);
} else if(struct_op.op == '-') {
struct_result.result = struct_num.num1_d - struct_num.num2_d;
printf("Result: %f\n", struct_result.result);
} else if(struct_op.op == '*') {
struct_result.result = struct_num.num1_d * struct_num.num2_d;
printf("Result: %f\n", struct_result.result);
}else if(struct_op.op == '/') {
    if (struct_num.num2_d == 0){
        printf("[ERR] | Division by zero is not allowed.");
    } else {
        struct_result.result = struct_num.num1_d / struct_num.num2_d;
        printf("Result: %f\n", struct_result.result);
    }

} else {

    printf("Something went wrong! try again later.");

}


}


int main(){


int_calculate();

return 0;

}