/* Program      : JumlahPecahan_MuhammadFauzanLubis.c
Deskripsi       : Penjumlahan pecahan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung penjumlahan dari A/Bdan C/D dan mengeluarkan hasilnya dalam bentuk yang paling sederhana. (Bentuk paling sederhana dari suatu pecahan adalah ketika FPB dari pembilang dan penyebutnya adalah 1.)

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

int main() {
    //Declaration
    int a, b, c, d, e, f, temp;

    //Process
    scanf("%d %d %d %d", &a, &b, &c, &d);

    e = (a * d) + (b * c);
    f = b * d;

    temp = fpb(e, f);
    e = e / temp;
    f = f / temp;

    printf("%d %d\n", e, f);
    return 0;
}