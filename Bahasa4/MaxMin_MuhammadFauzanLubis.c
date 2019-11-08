/* Program      : MaxMin_MuhammadFauzanLubis.c
Deskripsi       : Mencari yang paling kecil dan besar
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan nilai terbesar dan terkecil dari dua variabel, gunakan konsep modular untuk menentukan nilai terbesar dan terkecil.
======================================*/

#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    //Declaration
    int num1, num2;

    //Process
    scanf("%d %d", &num1, &num2);

    printf("%d %d", max(num1, num2), min(num1, num2));
    return 0;
}

max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

min(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}