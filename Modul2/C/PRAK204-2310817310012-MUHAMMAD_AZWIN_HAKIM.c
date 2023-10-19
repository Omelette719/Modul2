#include <stdio.h>
#define phi 22/7

int main(){
    double r;
    double t;

    scanf("%lf %lf", &r, &t); printf("\n");

    double volume = (double) phi*r*r*t;
    double luas = (double) 2*phi*r*(r+t);
    double keliling = (double) 2*phi*r;

    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf", keliling);

    return 0;
}