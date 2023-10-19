#include <stdio.h>

int main(){
    double a;
    double b;

    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &a);

    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &b);
    
    double hasil = (double) a+b;

    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2lf\"", a, b, hasil);

    return 0;
}
