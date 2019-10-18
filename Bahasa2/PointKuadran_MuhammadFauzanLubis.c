/* Program      : PointKuadran_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan berapa titik dalam kuadran
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung jumlah kemunculan titik yang berada di kuadran N dari M buah titik yang dimasukkan

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    typedef struct
    {
        int x;
        int y;
    } Point;
    Point titik[11];
    int banyak = 0, kuadran, total = 0, i;

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
            }
            break;

        case 2:
            if (titik[i].x < 0 && titik[i].y > 0)
            {
                total++;
            }
            break;

        case 3:
            if (titik[i].x < 0 && titik[i].y < 0)
            {
                total++;
            }
            break;

        case 4:
            if (titik[i].x > 0 && titik[i].y < 0)
            {
                total++;
            }
            break;
            
        default:
            break;
        }
    }

    printf("%d\n", total);

    return 0;
}