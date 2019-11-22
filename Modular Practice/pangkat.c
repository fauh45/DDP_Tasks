/* Program      : pangkat.c
Deskripsi       : Pemangkatan angka tanpa fungsi kali
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 22 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
======================================*/

#include <stdio.h>

/* Fungsi Prototipe */
unsigned long int kali(unsigned long int a, unsigned long int b);
unsigned long int pangkat(int a, int p);

int main() 
{
    int angka, p;

    scanf("%d %d", &angka, &p);
    printf("%d", pangkat(angka, p));
    return 0;
}

unsigned long int kali(unsigned long int a, unsigned long int b)
{
    if (b == 1)
    {
        return a;
    }

    return a + kali(a, b - 1);
}

unsigned long int pangkat(int a, int p)
{
    if (p == 1)
    {
        return a;
    }

    return kali(a, pangkat(a, p - 1));
}