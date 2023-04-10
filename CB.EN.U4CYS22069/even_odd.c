#include <stdio.h>
int main(){
int n;
printf("Check whether the number is even or odd:");
scanf("%d",&n);
 
//if the number is even the  output is 1
//if the number is odd the output is 0
printf("%d",n%2==0);
return 0;
}
