/* Program      : Perkalian_MuhammadFauzanLubis.c
Deskripsi       : Mengalikan 2 angka
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan jumlah perkalian dua angka dengan menggunakan konsep modular untuk menghitung perkalian tersebut.

======================================*/

#include <stdio.h>

int multiply(int num1, int num2);

int main() {
    //Declaration
    int num1, num2;
    
    //Process
    scanf("%d %d", &num1, &num2);
    printf("%d", multiply(num1, num2));

    return 0;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}