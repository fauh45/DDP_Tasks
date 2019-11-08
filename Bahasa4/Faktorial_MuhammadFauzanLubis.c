/* Program      : Faktorial_MuhammadFauzanLubis.c
Deskripsi       : Faktor dari input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung faktorial dari suatu bilangan dengan menggunakan konsep modular.

======================================*/

#include <stdio.h>

int faktorial(int num1);

int main() {
    //Declaration
    int num1;
    
    //Process
    scanf("%d", &num1);
    printf("%d", faktorial(num1));

    return 0;
}

int faktorial(int num1)
{
    if (num1 == 0)
    {
        return 1;
    }
    else
    {
        return num1 * faktorial(num1 - 1);
    }
    
}