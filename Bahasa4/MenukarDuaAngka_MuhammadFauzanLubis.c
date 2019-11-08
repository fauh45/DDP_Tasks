/* Program      : MenukarDuaAngka_MuhammadFauzanLubis.c
Deskripsi       : Swap
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buat lah program untuk menukar nilai dari dua angka pada suatu variabel, gunakan konsep modular untuk menjalankan proses tersebut, agar modul tersebut nantinya dapat dimanfaatkan untuk membuat algoritma yang lain.

======================================*/

#include <stdio.h>

void swap(int *val1, int *val2);

int main() {
    //Declaration
    int num1, num2;

    //Process
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);

    printf("%d %d", num1, num2);
    
    return 0;
}

void swap(int *val1, int *val2)
{
    int temp;

    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}