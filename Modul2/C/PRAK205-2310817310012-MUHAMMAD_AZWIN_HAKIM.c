#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;

    scanf("%lf %lf", &A, &B); printf("\n");

    double C = sqrt(pow(B, 2) - pow(A, 2));
    double keliling = A + B + C;
    double luas = (double) 1/2*A*C;

    printf("Alas = %g cm\n", C);
    printf("Tinggi = %g cm\n", A);
    printf("Keliling = %g cm\n", keliling);
    printf("Luas = %g cm^2", luas);

    return 0;
}