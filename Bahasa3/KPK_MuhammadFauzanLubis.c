/* Program      : KPK_MuhammadFauzanLubis.c
Deskripsi       : Mencari nilai KPK
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 23 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Kelipatan persekutuan terkecil (KPK) dari dua bilangan adalah bilangan bulat positif terkecil yang dapat dibagi habis oleh kedua bilangan itu. Misalnya, KPK dari 12 dan 20 adalah 60.
Diberikan sebuah input berupa dua bilangan, hitunglah KPK dari kedua bilangan tersebut.
(Jika Anda membutuhkan algoritma FPB untuk menyelesaikan kasus ini, gunakan algoritma yang sudah Anda buat di penugasan sebelumnya!)

======================================*/
#include <stdio.h>

int fpb(int a, int b) {
    int i, gcd;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        
    }

    return gcd;
}

int main()
{
    //Declaration
    int in1, in2, i, lcm;

    //Process
    scanf("%d %d", &in1, &in2);

    lcm = (in1 * in2) / fpb(in1, in2);

    printf("%d\n", lcm);
    
    return 0;
}