/* Program      : Median_MuhammadFauzanLubis.c
Deskripsi       : Mencari median
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan nilai median dari sekelompok data integer pada array 1 dimensi dengan maksimal 20 elemen.
Keterangan:
Sangat mungkin bahwa tidak semua elemen terisi.
0 (nol) tidak sama dengan kosong.
Data dijamin selalu terurut dari kecil ke besar (ascending).
======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int panjang, input[21], i = 0;

    //Process
    scanf("%d", &panjang);

    for (i = 0; i < panjang; i++)
    {
        scanf("%d", &input[i]);
    }

    if (panjang % 2 == 0)
    {
        printf("%.1f\n", (float) (input[panjang / 2] + input[panjang / 2 - 1]) / 2);
    }
    else
    {
        printf("%.1f\n", (float) input[panjang / 2]);
    }
    
    return 0;
}