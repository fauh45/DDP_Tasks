/* Program      : Ganjil2D_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan berapa banyak angka ganjil dalam array 2D
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung banyaknya kemunculan bilangan ganjil pada array X, di mana X adalah array 2 dimensi berordo 4 × 4.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int input[5][5], i, n, banyak = 0;

    //Process
    for (i = 0; i < 4; i++)
    {
        for (n = 0; n < 4; n++)
        {
            scanf("%d", &input[i][n]);
            if (input[i][n] % 2 != 0)
            {
                banyak++;
            }
            
        }
    }

    printf("%d\n", banyak);

    return 0;
}