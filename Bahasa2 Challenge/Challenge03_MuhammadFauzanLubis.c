/* Program      : Challenge03_MuhammadFauzanLubis.c
Deskripsi       : Rancangan ruang hotel
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 01 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Tim arsitek akan membuat rancangan penyusunan ruangan suatu gedung hotel yang “tidak biasa”. (Ini harus dipenuhi karena “pembeli adalah raja”.
======================================*/

#include <stdio.h>

int main() {
    //Declaration
    int ruangan[21][21], i, j, n, row, column, isi = 1;

    //Process
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        row = 0;
        column = n - i;

        // printf("%d %d ", column, i);

        while (column != n)
        {
            ruangan[row][column] = isi;
            // printf("%d ", ruangan[row][column]);
            row++;
            column++;
            isi++;
        }
        // printf("\n");

    }

    // printf("\n");

    for (i = n - 1; i >= 0; i--)
    {
        row = n - i;
        column = 0;

        // printf("%d %d ", column, i);

        while (row != n)
        {
            ruangan[row][column] = isi;
            // printf("%d ", ruangan[row][column]);
            row++;
            column++;
            isi++;
        }
        // printf("\n");

    }

    // printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                printf("%d", ruangan[i][j]);
            }
            else
            {
                printf("%d ", ruangan[i][j]);
            }
            
        }

        printf("\n");
    }
    return 0;
}