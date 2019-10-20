/* Program      : Pola4_MuhammadFauzanLubis.c
Deskripsi       : Mebuat pola berbentuk matriks dengan pola tertentu
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk membuat pola seperti pada contoh input dan contoh output.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int x, y, i = 0, n = 0, out = 1, temp[11][11];

    //Process
    scanf("%d %d", &y, &x);

    while (i < x)
    {
        for (n = 0; n < y; n++)
        {
            temp[n][i] = out;
            out++;
        }

        i++;

        for (n = y - 1; n >= 0; n--)
        {
            temp[n][i] = out;
            out++;
        }

        i++;

    }

    for (i = 0; i < y; i++)
    {
        for (n = 0; n < x; n++)
        {
            if (n == x - 1)
            {
                printf("%d", temp[i][n]);
            }
            else
            {
                printf("%d ", temp[i][n]);
            }
            
            
        }

        if (i != y - 1)
        {
            printf("\n");
        }
        
    }
    
    return 0;
}