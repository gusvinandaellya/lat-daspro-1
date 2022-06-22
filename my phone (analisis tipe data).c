#include <stdio.h>
#include <stdlib.h>

int main()
{
    //identifikasi
    printf("====My Phone====\n");
    printf("Ciri ciri / atribut yang dipakai:\n");
    char merk[30];
    strcpy(merk,"SAMSUNG GALAXY J5 2016\n");
    //Merk = "SAMSUNG GALAXY J5 2016";
    printf("Merk HP\t\t\t: %s",merk);
    char warna[10];
    strcpy(warna,"Putih\n");
    //Warna = "Putih";
    printf("Warna HP\t\t: %s",warna);
    int harga;
    harga = 3000000;
    printf("Harga HP(dalam rupiah)\t: %i\n",harga);

    return 0;
}
