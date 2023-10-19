#include <stdio.h>


int main(){
    char nama[20];
    char nim[20];
    char paralel[20];
    char ttl[20];
    char alamat[100];
    char hobby[70];
    char hp[20];

    printf("Nama                 : "); gets(nama);
    printf("NIM                  : "); gets(nim);
    printf("Kelas Paralel        : "); gets(paralel);
    printf("Tempat/Tanggal Lahir : "); gets(ttl);
    printf("Alamat               : "); gets(alamat); 
    printf("Hobby                : "); gets(hobby);
    printf("No. HP	             : "); gets(hp); printf("\n");

    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", paralel);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP	             : %s", hp);

    return 0;
}