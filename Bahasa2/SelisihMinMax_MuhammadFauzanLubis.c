/* Program      : SelisihMinMax_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan selisih angka terbesar dan terkecil
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung selisih dari nilai terbesar dan nilai terkecil dari sebuah array 1 dimensi bertipe integer dengan 10 elemen.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int input[10], i = 0, maks = 0, min = 0;

    //Process
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &input[i]);

        if (i == 0)
        {
            min = input[i];
        }
        
        else if (input[i] > maks)
        {
            maks = input[i];
        }
        
        else if (input[i] < min)
        {
            min = input[i];
        }
        
    }
    printf("%d\n", maks - min);

    return 0;
}