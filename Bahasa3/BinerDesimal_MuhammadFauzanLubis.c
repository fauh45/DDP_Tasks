/* Program      : BinerDesimal_MuhammadFauzanLubis.c
Deskripsi       : Konversi biner ke desimal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk mengonversi bilangan biner ke bilangan desimal.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    int i = 0, temp = 0, pengali = 1;
    long long desimal = 0;
    char biner[32];

    //Process
    gets(biner);

    for (i = strlen(biner) - 1; i >= 0; i--)
    {
        temp = (int) biner[i] - '0';
        desimal = (temp * pengali) + desimal;

        pengali = pengali * 2;
    }
    
    printf("%lld", desimal);
    
    return 0;
}