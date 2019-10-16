/* Program      : BasicIO2_MuhammadFauzanLubis.c
Deskripsi       : Program akan mengembalikan value input dengan value bilangan diantara input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Tampilkan  semua bilangan bulat dari X  hingga  Y dalam satu baris (dipisahkan oleh 1 spasi, dan setelah nilai terkahir diberi enter).

======================================*/
#include <stdio.h>

int main() {
    // Variable Declaration
    int masuk[2], i = 0;

    // Process
    scanf("%d %d", &masuk[0], &masuk[1]);
    
    for (i = masuk[0]; i <= masuk[1]; i++)
    {
        if (i == masuk[1])
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}