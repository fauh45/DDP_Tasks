/* Program      : Right_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan string dari kanan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menampilkan N buah karakter terkanan dari sebuah array karakter.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char masuk[31];
    int i = 0, banyak = 0, panjang;

    //Process
    scanf("%[^\n]", &masuk);
    scanf("%d", &banyak);

    panjang = strlen(masuk);
    for (i = panjang - banyak; i < panjang; i++)
    {
        printf("%c", masuk[i]);
    }

    return 0;
}