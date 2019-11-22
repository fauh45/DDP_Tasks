/* Program      : kali.c
Deskripsi       : Pengalian dengan dengan menggunakan modular
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 22 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
======================================*/

#include <stdio.h>

/* Fungsi Prototipe */
int kali(int a, int b);

int main() 
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", kali(a, b));
    return 0;
}

int kali(int a, int b)
{
    if (b == 1)
    {
        return a;
    }

    return a + kali(a, b - 1);
}