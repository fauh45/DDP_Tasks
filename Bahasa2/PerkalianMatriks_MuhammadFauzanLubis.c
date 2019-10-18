/* Program      : PerkalianMatriks_MuhammadFauzanLubis.c
Deskripsi       : Perkalian matriks
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Anda diberikan dua buah matriks. Matriks pertama berukuran A × B sedangkan matriks kedua berukuran C × D. Tiap elemen pada kedua matriks tersebut adalah sebuah bilangan bulat antara 1 sampai 100. Kalikan kedua matriks tersebut lalu cetak hasilnya.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[76][76], matriks2[76][76], baris1, kolom1, baris2, kolom2, i, n, m, temp = 0;

    //Process
    scanf("%d %d", &baris1, &kolom1);

    for (i = 0; i < baris1; i++)
    {
        for (n = 0; n < kolom1; n++)
        {
            scanf("%d", &matriks1[i][n]);
        }
    }
    
    scanf("%d %d", &baris2, &kolom2);

    for (i = 0; i < baris2; i++)
    {
        for (n = 0; n < kolom2; n++)
        {
            scanf("%d", &matriks2[i][n]);
        }
    }

    for (i = 0; i < baris1; i++)
    {
        for (n = 0; n < kolom2; n++)
        {
            for (m = 0; m < kolom1; m++)
            {
                temp = temp + matriks1[i][m] * matriks2[m][n];
            }

            if (n == kolom2 - 1)
            {
                printf("%d", temp);
            }
            else
            {
                printf("%d ", temp);
            }
            
            temp = 0;
        }

        printf("\n");
    }

    return 0;
}