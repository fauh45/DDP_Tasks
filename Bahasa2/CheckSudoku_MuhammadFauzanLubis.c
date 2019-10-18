/* Program      : CheckSudoku_MuhammadFauzanLubis.c
Deskripsi       : Cek sudoku valid atau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk memeriksa apakah sebuah blok yang ada di permainan sudoku valid atau tidak. Blok tersebut dinyatakan valid jika setiap angka hanya muncul satu kali (unik).

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[4][4], angka[9], i, n, benar = 0;

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks1[i][n], &angka[i + n]);
            
        }
    }

    for (i = 0; i < 9; i++)
    {
        for (n = 0; n < 16; n++)
        {
            if (angka[i] == angka[n])
            {
                benar = 0;
                break;
            }
            else
            {
                benar = 1;
            }
            
            
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (matriks1[i][0] != matriks1[i][1] != matriks1[i][2])
        {
            benar = 1;
        }
        else
        {
            benar = 0;
            break;
        }
        
        if (matriks1[0][i] != matriks1[1][i] != matriks1[2][i])
        {
            benar = 1;
        }
        else
        {
            benar = 0;
            break;
        }

    }

    if (benar == 1)
    {
        printf("valid\n");
    }
    else
    {
        printf("tidak valid\n");
    }
    
    return 0;
}