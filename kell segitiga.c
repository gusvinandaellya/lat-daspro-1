#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("keliling Segitiga\n");
    //kamus
    float sisi,keliling;
    printf("sisi segitiga\t\t:");
    scanf("%f",&sisi);
    //progam
    keliling= sisi + sisi + sisi;
    printf("keliling segitiga\t:%2.f",keliling);


    return 0;
}
