/* Program      : ArrayPoint_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan apakah array N dan M sama
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk memeriksa apakah array M dan N sama.

M dan N adalah array of Point, masing-masing memiliki 5 elemen. Array M dan N dikatakan sama jika setiap elemen yang bersesuaian bernilai sama.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    typedef struct
    {
        int x;
        int y;
    } Point;
    Point N[6], M[6];
    int i = 0, sama = 1;

    //Process
    for (i = 0; i < 5; i++)
    {
        scanf("%d %d", &M[i].x, &M[i].y);
    }

    for (i = 0; i < 5; i++)
    {
        scanf("%d %d", &N[i].x, &N[i].y);
    }

    for (i = 0; i < 5; i++)
    {
        if (M[i].x != N[i].x || M[i].y != N[i].y)
        {
            printf("tidak sama\n");
            sama = 0;
            break;
        }
        
    }

    if (sama == 1)
    {
        printf("sama\n");
    }
    
    return 0;
}