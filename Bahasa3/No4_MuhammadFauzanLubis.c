/* Program      : No4_MuhammadFauzanLubis.c
Deskripsi       : Berapa banyak bilangan tanpa belakang 4
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung banyaknya bilangan antara x dan y yang tidak mengandung akhiran angka 4 (atau -4).

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    int i = 0, count = 0, rangebawah, rangeatas;

    //Process
    scanf("%d %d", &rangebawah, &rangeatas);
    
    for (i = rangebawah + 1; i < rangeatas; i++)
    {
        if (abs(i) % 10 != 4)
        {
            count++;
        }
        
    }

    printf("%d\n", count);

    return 0;
}