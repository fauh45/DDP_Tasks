/* Program      : Maks3_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan angka terbesar dari input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menentukan bilangan terbesar dari tiga bilangan yang dimasukkan.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int masuk[3], i = 1, maks;

    //Process
    scanf("%d\n%d\n%d", &masuk[0], &masuk[1], &masuk[2]);
    maks = masuk[0];
    while (i != 3)
    {
        if (masuk[i] > maks)
        {
            maks = masuk[i];
        }

        i++;

    }  
    
    printf("%d\n", maks);
    
    return 0;
}