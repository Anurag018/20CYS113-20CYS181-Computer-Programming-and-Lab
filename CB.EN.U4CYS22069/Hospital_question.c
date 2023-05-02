#include<stdio.h>
int main() {
int volume;
double time,timeinhours,infusionrate;
printf("Enter the volume in ml \n",volume);
scanf("%d",&volume);
printf("Enter the time in minutes \n",time);
scanf("%lf",&time);
timeinhours=(time/60)
printf("The time in hours is",timeinhours);
infusionrate=(volume)/timeinhours;
printf("The infusionrate is %lf \n",infusionrate);
return 0;
}
