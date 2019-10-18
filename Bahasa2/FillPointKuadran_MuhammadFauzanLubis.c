/* Program      : FillPointKuadran_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan berapa titik dalam kuadran dan apa saja titiknya
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Diketahui array of Point bernama A dengan maksimal M elemen. Isilah array of Point bernama B dengan elemen-elemen dari A yang berada di kuadran N.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    typedef struct
    {
        int x;
        int y;
    } Point;
    Point titik[11], ditemukan[11];
    int banyak = 0, kuadran, total = 0, i, n = 0;

    //Process
    scanf("%d", &banyak);
    for (i = 0; i < banyak; i++)
    {
        scanf("%d %d", &titik[i].x, &titik[i].y);
    }
    scanf("%d", &kuadran);

    for (i = 0; i < banyak; i++)
    {
        switch (kuadran)
        {
        case 1:
            if (titik[i].x > 0 && titik[i].y > 0)
            {
                total++;
                ditemukan[n] = titik[i];
                n++;
            }
            break;

        case 2:
            if (titik[i].x < 0 && titik[i].y > 0)
            {
                total++;
                ditemukan[n] = titik[i];
                n++;
            }
            break;

        case 3:
            if (titik[i].x < 0 && titik[i].y < 0)
            {
                total++;
                ditemukan[n] = titik[i];
                n++;
            }
            break;

        case 4:
            if (titik[i].x > 0 && titik[i].y < 0)
            {
                total++;
                ditemukan[n] = titik[i];
                n++;
            }
            
        default:
            break;
        }
    }

    printf("%d\n", total);
    for (i = 0; i < total; i++)
    {
        printf("%d %d\n", ditemukan[i].x, ditemukan[i].y);
    }

    return 0;
}