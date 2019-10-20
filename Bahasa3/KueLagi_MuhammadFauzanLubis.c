/* Program      : KueLagi_MuhammadFauzanLubis.c
Deskripsi       : Menentukan apakah 2 input adalah sama dalam parameter persen yang sudah ditentukan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Kedua buah kue dapat dikatakan sama apabila kesamaan komposisi keduanya lebih dari atau sama dengan N% (urutan komposisi kue tidak dipermasalahkan).

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    int i = 0, n = 0, ada = 0, poin = 0, k, l;
    float persen, kesamaan;
    char kue1[9][9], kue2[9][9];

    //Process
    scanf("%f", &persen);

    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        scanf("%s", &kue1[i]);
    }

    scanf("%d", &l);

    for (i = 0; i < l; i++)
    {
        scanf("%s", &kue2[i]);
    }

    if (l != k)
    {
        poin = 0;
    }
    else
    {
        for (i = 0; i < l; i++)
        {
            ada = 0;
            n = 0;

            while (ada != 1 && n < l)
            {
                if (strcmp(kue1[i], kue2[n]) == 0)
                {
                    ada = 1;
                    poin++;
                }

                n++;
            }
        
        }
    }
    
    kesamaan = (float) poin / l * 100;
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