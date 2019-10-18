/* Program      : Array2DVocal_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan posisi kata vokal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menampilkan posisi kemunculan huruf vokal yang ada di sebuah array 2 dimensi berordo 3 × 3.

======================================*/
#include <stdio.h>
#include <ctype.h>

int main() {
    //Declaration
    int i, n, m, ada = 0;
    char matriks[4][4], vokal[6] = "aiueo";

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf(" %c", &matriks[i][n]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            for (m = 0; m < 5; m++)
            {
                if (tolower(matriks[i][n]) == vokal[m])
                {
                    printf("%c: (%d,%d)\n", matriks[i][n], i + 1, n + 1);
                    ada = 1;
                }
                
            }
        }
    }

    if (ada == 0)
    {
        printf("tidak ada huruf vokal\n");
    }
    

    return 0;
}