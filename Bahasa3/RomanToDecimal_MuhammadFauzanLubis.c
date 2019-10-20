/* Program      : RomanToDecimal_MuhammadFauzanLubis.c
Deskripsi       : Roman ke desimal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Seorang arkeolog bernama Pak Wono sedang membaca literatur kuno. Di dalam literatur tersebut terdapat banyak sekali angka Romawi. Sayangnya, Pak Wono sering tertidur di tengah perkuliahan ketika masih muda dahulu. Kebetulan, sekali waktu Pak Wono tertidur, dosennya sedang menerangkan mengenai angka romawi dan desimal.
Pak Wono ingat bahwa ia berteman dengan Anda, seorang mahasiswa yang sedang belajar informatika di POLBAN. Bantulah Pak Wono membaca angka Romawi yang ia temukan!

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    int i = 0, count = 0, konversi[16];
    char roman[16];

    //Process
    scanf("%s", &roman);

    for (i = 0; i < strlen(roman); i++)
    {
        switch (roman[i])
        {
        case 'I':
            konversi[i] = 1;
            break;
        
        case 'V':
            konversi[i] = 5;
            break;

        case 'X':
            konversi[i] = 10;
            break;

        case 'L':
            konversi[i] = 50;
            break;

        case 'C':
            konversi[i] = 100;
            break;

        case 'D':
            konversi[i] = 500;
            break;

        case 'M':
            konversi[i] = 1000;
            break;

        default:
            break;
        }
        
    }

    i = 0;

    while (roman[i])
    {
        if (konversi[i] >= konversi[i + 1])
        {
            count = count + konversi[i];
        }
        else
        {
            count = count + (konversi[i + 1] - konversi[i]);
            i++;
        }
        i++;
        
    }
    
    printf("%d\n", count);

    return 0;
}