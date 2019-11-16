/* Program      : Pemilu_MuhammadFauzanLubis.c
Deskripsi       : Mencari pemenang pemilu
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Sebuah RT akan mengadakan Pemilihan RT dengan menggunakan metode quick count. Panita Pemilihan menetapkan bahwa calon Ketua RT tidak boleh lebih dari 5 orang. Jumlah penduduk yang memiliki hak pilih sebanyak 20 orang (sudah termasuk calon Ketua RT).
Buatlah program untuk merekap hasil pemilihan Ketua RT, menampilkannya kedalam diagram batang (Histogram) dan menampilkan calon RT mana yang menang.

======================================*/

#include <stdio.h>

int main()
{
    //Declaration
    int n, RT[7][3], i, j, max = 0, posmax = 0;

    //Process
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &RT[i][0], &RT[i][1]);

        if (i == 0)
        {
            max = RT[i][1];
            posmax = RT[i][0];
        }
        else if (max < RT[i][1])
        {
            max = RT[i][1];
            posmax = RT[i][0];
        }
    }

    printf("%d\n", posmax);

    for (i = 0; i < n; i++)
    {
        printf("%d ", RT[i][0]);

        for (j = 0; j < RT[i][1]; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}