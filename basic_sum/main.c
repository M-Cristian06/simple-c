#include <stdio.h>


struct numbers
{
    float num1, num2, num3, sum;
};


void calculate(){

struct numbers z1;

printf("Num 1: ");
scanf("%f", &z1.num1);

printf("Num 2: ");
scanf("%f", &z1.num2);

printf("Num 3:");
scanf("%f", &z1.num3);

z1.sum = z1.num1 + z1.num2 + z1.num3; 
printf("Sum: %f\n", z1.sum);


}


int main(){

calculate();

return 0;

}


