/* Program      : MatriksNol_MuhammadFauzanLubis.c
Deskripsi       : Cek matriks apakah matriks nol atau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks nol atau bukan, di mana M adalah sebuah matriks dengan ordo 3 × 3.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[4][4], i, n, tidaknol = 0;

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks1[i][n]);

            if (matriks1[i][n] != 0)
            {
                tidaknol = 1;
            }
            
        }
    }

    if (tidaknol == 1)
    {
        printf("bukan matriks nol\n");
    }
    else
    {
        printf("matriks nol\n");
    }
    
    return 0;
}