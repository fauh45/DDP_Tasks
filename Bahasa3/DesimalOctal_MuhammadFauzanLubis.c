/* Program      : DesimalOctal_MuhammadFauzanLubis.c
Deskripsi       : Konversi desimal ke octal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk mengonversi bilangan desimal ke bilangan oktadesimal (basis 8).

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int desimal, i = 0, octal[33];

    //Process
    scanf("%d", &desimal);

    while (desimal > 0)
    {
        octal[i] = desimal % 8;
        desimal = desimal / 8;

        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    
    return 0;
}