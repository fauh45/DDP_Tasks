/* Program      : Pangkat_MuhammadFauzanLubis.c
Deskripsi       : Bilangan 1 pangkat bilangan 2
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung nilai pangkat dengan menggunakan konsep modular untuk menghitungnya.

======================================*/

#include <stdio.h>
#include <math.h>

int powerof(int num1, int num2);

int main() {
    //Declaration
    int num1, num2;
    
    //Process
    scanf("%d %d", &num1, &num2);
    printf("%d", powerof(num1, num2));

    return 0;
}

int powerof(int num1, int num2)
{
    return pow(num1, num2);
}