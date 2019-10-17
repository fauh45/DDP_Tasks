/* Program      : PointCircle_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan apakah titik dalam lingakran, di luar atau tepat dalam lingkaran
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk memeriksa posisi suatu titik terhadap lingkaran.

======================================*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    //Declaration
    typedef struct
    {
        int x;
        int y;
    } Point;
    
    int i = 0;

    //Process
    Point pusat, tes;
    int radius, pos;

    scanf("%d %d", &pusat.x, &pusat.y);
    scanf("%d", &radius);
    scanf("%d %d", &tes.x, &tes.y);

    pos = pow((tes.x - pusat.x), 2) + pow((tes.y - pusat.y), 2);

    if (tes.x == pusat.x && tes.y == pusat.y)
    {
        printf("tepat pada titik pusat");
    }
    else if (pos == pow(radius, 2))
    {
        printf("tepat pada lingkaran\n");
    }
    else if (pos > pow(radius, 2))
    {
        printf("di luar lingkaran\n");
    }
    else if (pos < pow(radius, 2))
    {
        printf("di dalam lingkaran\n");
    }
    
    return 0;
}