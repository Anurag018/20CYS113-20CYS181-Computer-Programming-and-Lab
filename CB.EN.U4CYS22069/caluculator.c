#include  <stdio.h>

int main() {

printf("Welcome to the caluculator\n");

int operand1,operand2,result;

printf("Enter the first operand:");
scanf("%d",&operand1);

printf("Enter the second operand:");
scanf("%d",&operand2);

printf("the sum of %d and %d is %d\n", operand1,operand2, operand1+operand2);
printf("the difference of %d and %d is %d\n",operand1,operand2, operand1-operand2);
printf("the product of %d and %d is %d\n",operand1,operand2, operand1*operand2);
printf("the division of %d and %d is %d\n", operand1,operand2, operand1/operand2);
printf("the modulus of %d and %d is %d\n",operand1,operand2, operand1%operand2);

return 0;
}
