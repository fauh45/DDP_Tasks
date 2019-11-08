/* Program      : PenjumlahanTigaAngka_MuhammadFauzanLubis.c
Deskripsi       : Menjumlahkan 3 angka
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan jumlah dari tiga angka, gunakan function untuk menjumlahkan tiga angka tersebut.

======================================*/

#include <stdio.h>

int add3num(int num1, int num2, int num3);

int main() {
    //Declaration
    int num1, num2, num3;
    
    //Process
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d", add3num(num1, num2, num3));

    return 0;
}

int add3num(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}