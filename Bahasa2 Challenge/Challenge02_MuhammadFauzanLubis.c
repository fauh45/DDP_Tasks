/* Program      : Challenge02_MuhammadFauzanLubis.c
Deskripsi       : Menghitung banyak gerak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 31 October 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Diketahui dua koordinat pada bidang Cartesius, P(x, y) dan Q(x, y), di mana P menunjukkan koordinat awal dan Q menunjukkan koordinat akhir.
Hitunglah jumlah pergerakan minimal yang dibutuhkan untuk bergerak dari P ke Q, dengan ketentuan:
Setiap pergerakan hanya boleh mengubah nilai dari satu sumbu;
Antar pergerakan harus bergantian antar sumbu;
Dahulukan pergerakan pertama untuk sumbu x.
======================================*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration
    typedef struct
    {
        int x;
        int y;
    } point;

    point P, Q;
    int hitung = 0;

    //Process
    scanf("%d %d %d %d", &P.x, &P.y, &Q.x, &Q.y);

    while (P.x != Q.x || P.y != Q.y)
    {
        if (Q.x >= P.x)
        {
            P.x += 1;
            hitung++;
        }
        else
        {
            P.x -= 1;
            hitung++;
        }

        if (P.x == Q.x && P.y == Q.y)
        {
            break;                      //If P=Q already, stop
        }

        if (Q.y >= P.y)
        {
            P.y += 1;
            hitung++;
        }
        else
        {
            P.y -= 1;
            hitung++;
        }

        // printf("%d %d\n", P.x, P.y);

        if ((abs(Q.x - P.x) == 1 && P.y == Q.y) || (abs(Q.y - P.y) == 1 && P.y == Q.y))
        {
            hitung += 1;
            break;                  //If either P.x - Q.x and P.y = Q.y or P.y - Q.y and P.x = Q.x is equal to 1 or -1 add 1 to the cound and stop
        }

    }

    printf("%d\n", hitung);

    return 0;
}