#include <stdio.h>

int main(){
    double a;
    double b;
    double i;
    double j;
    double x;
    double y;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);
    
    double hasil = (double) (a-b)*(i/j)-(x+y);

    printf("\n%.3lf", hasil);

    return 0;
}