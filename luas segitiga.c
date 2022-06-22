#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Menentukan Luas Segitiga\n");

    /*kamus*/
    float alas;
    float tinggi;
    float luas;
    printf("alas segitiga\t:");
    scanf("%f",&alas);
    printf("tinggi segitiga\t:");
    scanf("%f",&tinggi);
    /*progam*/
    luas=alas*tinggi/2;
    printf("luas segitiga\t:%2.f",luas);
    return 0;
}
