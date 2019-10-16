/* Program      : Kelipatan34_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan input kelipatan 3 dan 4 atau bukan keduanya
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Lengkapilah prototipe program berikut untuk menentukan apakah suatu bilangan merupakan kelipatan 3 dan 4 atau tidak.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int masuk, cek = 0;

    //Process
    scanf("%d", &masuk);
    if (masuk % 3 == 0 && masuk % 4 == 0)
    {
        cek = 1;
    }
    else
    {
        cek = 0;
    }
    
    printf("%d\n", cek);
    
    return 0;
}