/* Program      : JumlahPecahan_MuhammadFauzanLubis.c
Deskripsi       : Penjumlahan pecahan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung penjumlahan dari A/Bdan C/D dan mengeluarkan hasilnya dalam bentuk yang paling sederhana. (Bentuk paling sederhana dari suatu pecahan adalah ketika FPB dari pembilang dan penyebutnya adalah 1.)

======================================*/
#include <stdio.h>

// int fpb(int a, int b) {
//     int i, gcd;
//     for (i = 1; i <= a && i <= b; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
        
//     }

//     return gcd;
// }
int fpb(int a, int b) {
    if (a == 0)
    {
        return b;
    }

    return fpb(b % a, a);
}

int main() {
    //Declaration
    int a, b, c, d, e, f, temp, lcm;

    //Process
    scanf("%d %d %d %d", &a, &b, &c, &d);

    f = (b * d) / fpb(b, d);
    e = (f / b) * a + (f / d) * c;
    
    temp = fpb(e, f);

    while (temp != 1)
    {
        e = e / temp;
        f = f / temp;
        temp = fpb(e, f);
    }
    
    printf("%d %d\n", e, f);
    return 0;
}