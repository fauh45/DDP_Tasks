/* Program      : MencariHuruf_MuhammadFauzanLubis.c
Deskripsi       : Mencari huruf dalam kamus data atau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Diketahui sebuah array satu dimensi bertipe char bernama X dengan 10 elemen berisi sebagai berikut:
JTKPolban
Buatlah program untuk memeriksa apakah suatu huruf berada di array X atau tidak. (Dalam melakukan pencarian, huruf kecil dan besar dianggap sama.)

======================================*/
#include <stdio.h>
#include <ctype.h>

int main() {
    //Declaration
    char text[10] = "JTKPolban", masuk;
    int i = 0, cek = 0;

    //Process
    scanf("%c", &masuk);

    while (i < 10 && cek != 1)
    {
        if (tolower(masuk) == tolower(text[i]))
        {
            cek = 1;
        }
        i++;
    }

    if (cek == 1)
    {
        printf("ada\n");
    }
    else
    {
        printf("tidak ada\n");
    }

    return 0;
}