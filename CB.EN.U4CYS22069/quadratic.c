#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

        root1 = (-b+ sqrt(b*b - 4*a*c)) / (2*a);
        root2 = (-b- sqrt(b*b - 4*a*c)) / (2*a);
        printf("root1 = %lf and root2 = %lf", root1, root2);
return 0;
}
