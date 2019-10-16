/* Program      : SelisihPrima_MuhammadFauzanLubis.c
Deskripsi       : Menghitung selisih bilangan prima dalam range yang ada dalam input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.
Diketahui bilangan X dan Y, hitunglah selisih bilangan prima terbesar dan bilangan prima terkecil mulai dari X sampai Y.

======================================*/
#include <stdio.h>

int prime(int angka) {
    int i = 5;

    if (angka <= 1)
    {
        return 0;
    }
    else if (angka <= 3)
    {
        return 1;
    }
    
    if (angka % 2 == 0 || angka % 3 == 0)
    {
        return 0;
    }

    while (i * i <= angka)
    {
        if (angka % i == 0 || angka % (i + 2) == 0)
        {
            return 0;
        }

        i = i + 6;
                        
    }
    
    return 1;
    
}

int main() {
    //Declaration
    int batasbawah, batasatas, primakecil, primabesar, i = 0;

    //Process
    scanf("%d %d", &batasbawah, &batasatas);

    for (i = batasbawah; i <= batasatas; i++)
    {
        if (prime(i) == 1)
        {
            primakecil = i;
            break;
        }
        
    }

    for (i = batasatas; i >= batasbawah; i--)
    {
        if (prime(i) == 1)
        {
            primabesar = i;
            break;
        }
        
    }

    printf("%d\n", primabesar - primakecil);
    
    return 0;
}