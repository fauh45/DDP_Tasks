/* Program      : DesimalBiner_MuhammadFauzanLubis.c
Deskripsi       : Konversi desimal ke biner
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk mengonversi bilangan desimal ke bilangan biner.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int desimal, biner[33], i = 0;

    //Process
    scanf("%d", &desimal);

    while (desimal > 0)
    {
        biner[i] = desimal % 2;
        desimal = desimal / 2;
        
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", biner[i]);
    }
    
    return 0;
}