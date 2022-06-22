#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Menghitung Luas dan keliling Segitiga\n");

    /*kamus*/
    float sisi;
    float alas;
    float tinggi;
    float keliling;
    float luas;
    printf("alas segitiga:");
    scanf("%f",&alas);
    printf("tinggi segitiga:");
    scanf("%f",&tinggi);
    printf("sisi segitiga:");
    scanf("%f",&sisi);
    /*progam*/
    luas= alas * tinggi / 2;
    printf("jadi luas segitiga adalah\t:%2.f\n",luas);
    keliling= sisi + sisi + sisi;
    printf("jadi keliling segitiga adalah\t:%2.f",keliling);

    return 0;
}
