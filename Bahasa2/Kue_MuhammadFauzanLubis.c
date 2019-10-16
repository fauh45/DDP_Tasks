/* Program      : Kue_MuhammadFauzanLubis.c
Deskripsi       : Menentukan apakah 2 input adalah sama dalam parameter persen yang sudah ditentukan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Kedua buah kue dapat dikatakan sama apabila kesamaan komposisi keduanya lebih dari atau sama dengan N% (urutan komposisi kue tidak dipermasalahkan).

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    int i = 0, n = 0, ada = 0, poin = 0;
    float persen, kesamaan;
    char kue1[9], kue2[9];

    //Process
    scanf("%f", &persen);

    for (i = 0; i < 9; i++)
    {
        scanf("%c", &kue1[i]);
    }

    for (i = 0; i < 9; i++)
    {
        scanf("%c", &kue2[i]);
    }

    for (i = 0; i < 9; i++)
    {
        ada = 0;
        n = 0;

        while (ada != 1 && n < 9)
        {
            if (kue1[i] == kue2[n])
            {
                ada = 1;
                poin++;
            }

            n++;
        }
        
    }

    kesamaan = (float) poin / 8 * 100;
    if (kesamaan > persen)
    {
        printf("sama\n");
    }
    else
    {
        printf("tidak sama\n");
    }
    
    return 0;
}