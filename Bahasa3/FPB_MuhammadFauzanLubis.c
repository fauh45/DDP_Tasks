/* Program      : FPB_MuhammadFauzanLubis.c
Deskripsi       : Mencari nilai FPB
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : FPB (Faktor Persekutuan Terbesar) dari dua buah bilangan bulat A dan B adalah bilangan bulat non-negatif terbesar yang membagi A dan membagi B. Misalnya, FPB dari 12 dan 20 adalah 4.
Diberikan sebuah input berupa dua bilangan, hitunglah FPB dari kedua bilangan tersebut.
(Gunakan algoritma yang sudah Anda buat di penugasan tertulis sebelumnya!)

======================================*/
#include <stdio.h>

int fpb(int a, int b) {
    if (a == 0)
    {
        return b;
    }

    return fpb(b % a, a);
}

int main()
{
    //Declaration
    int in1, in2, i;

    //Process
    scanf("%d %d", &in1, &in2);

    printf("%d\n", fpb(in1, in2));
    
    return 0;
}