/* Program      : MatriksDiagonal_MuhammadFauzanLubis.c
Deskripsi       : Cek matriks apakah matriks diagonal atau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Matriks diagonal adalah matriks bujur sangkar yang semua elemen di luar diagonal utamanya bernilai nol, dan semua elemen pada diagonal utamanya bernilai tidak nol.
Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks diagonal atau bukan, di mana M adalah sebuah matriks dengan ordo 3 × 3.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[4][4], i, n, diagonal = 1;

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks1[i][n]);

            if (i == n && matriks1[i][n] == 0)
            {
                diagonal = 0;
            }
            else if (i != n && matriks1[i][n] != 0)
            {
                diagonal = 0;
            }
            
        }
    }

    if (diagonal == 1)
    {
        printf("matriks diagonal\n");
    }
    else
    {
        printf("bukan matriks diagonal\n");
    }
    
    return 0;
}