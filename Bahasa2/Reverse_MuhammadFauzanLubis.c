/* Program      : Reverse_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan string terbalik
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk membalik array karakter yang dimasukkan.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char input[11];
    int i = 0;

    //Process
    gets(input);

    for (i = strlen(input) - 1; i >= 0; i--)
    {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}