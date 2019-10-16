/* Program      : GanjilGenapNol_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan input ganjil atau genap atau nol
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menentukan apakah suatu bilangan termasuk bilangan ganjil atau genap atau nol.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int masuk;

    //Process
    scanf("%d", &masuk);

    if (masuk == 0)
    {
        printf("nol\n");
    }
    else if (masuk % 2 != 0)
    {
        printf("ganjil\n");
    }
    else
    {
        printf("genap\n");
    }
    
    return 0;
}