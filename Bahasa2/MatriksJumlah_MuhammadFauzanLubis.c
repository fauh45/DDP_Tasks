/* Program      : MatriksJumlah_MuhammadFauzanLubis.c
Deskripsi       : Penjumlahan matriks
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menghitung hasil penjumlahan matriks A dan matriks B, dengan A dan B berordo 3 × 3.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[4][4], matriks2[4][4], i, n;

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks1[i][n]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks2[i][n]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            if (n == 2)
            {
                printf("%d", (matriks1[i][n] + matriks2[i][n]));
            }
            else
            {
                printf("%d ", (matriks1[i][n] + matriks2[i][n]));
            }
        }

        printf("\n");
    }

    return 0;
}