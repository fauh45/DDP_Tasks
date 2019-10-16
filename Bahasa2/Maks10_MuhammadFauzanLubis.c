/* Program      : Maks10_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan angka terbesar dari input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menentukan bilangan terbesar dari sepuluh bilangan yang ada di dalam array 1 dimensi bertipe integer. 

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int input[10], i = 0, maks = 0;

    //Process
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &input[i]);
        if (input[i] > maks)
        {
            maks = input[i];
        }
        
    }
    printf("%d\n", maks);

    return 0;
}