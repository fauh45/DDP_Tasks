/* Program      : Juara_MuhammadFauzanLubis.c
Deskripsi       : Mencari sang Juara
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Diketahui orang-orang yang menjadi juara catur dan orang-orang yang menjadi juara badminton. Buatlah program untuk menampilkan siapa saja yang menjadi juara di dua cabang lomba tersebut.
Karena Anda adalah sang juara, maka tampilkan daftar pemenang dalam kondisi terurut descending.

======================================*/
#include <stdio.h>
#include <string.h>

int main()
{
    //Declaration
    int i = 0, n = 0, c1, c2, ada = 0, m = 0;
    char cabang1[6][101], cabang2[6][101], temp[101], sama[6][101];

    //Process
    scanf("%d ", &c1);

    for (i = 0; i < c1; i++)
    {
        scanf(" %[^\n]", &cabang1[i]);
    }

    scanf(" %d", &c2);

    for (i = 0; i < c2; i++)
    {
        scanf(" %[^\n]", &cabang2[i]);
    }

    for (i = 0; i < c1; i++)
    {
        ada = 0;
        n = 0;

        while (ada != 1 && n < c2)
        {
            if (strcmp(cabang1[i], cabang2[n]) == 0)
            {
                strcpy(sama[m], cabang1[i]);
                ada = 1;
                m++;
            }

            n++;
        }
    }

    if (ada == 0)
    {
        printf("tidak ada sang juara\n");
    }

    for (i = 0; i < m; i++)
    {
        for (n = i + 1; n < m; n++)
        {
            if (strcmp(sama[i], sama[n]) < 0)
            {
                strcpy(temp, sama[i]);
                strcpy(sama[i], sama[n]);
                strcpy(sama[n], temp);
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("%s\n", sama[i]);
    }

    return 0;
}
