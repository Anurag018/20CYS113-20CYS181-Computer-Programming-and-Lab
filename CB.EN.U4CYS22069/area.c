#include <stdio.h>

#define HALF 1/2
 int main() {
int base,height,area;

printf("Enter the base of the traingle:");
scanf("%d",&base);

printf("Enter the height of the traingle:");
scanf("%d",&height);


printf("The area of the triangle with base %d and height %d is: %d\n", base,height,(base*height)/2);

return 0;
}
