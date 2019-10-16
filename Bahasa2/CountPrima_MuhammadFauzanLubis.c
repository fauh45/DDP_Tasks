/* Program      : CountPrima_MuhammadFauzanLubis.c
Deskripsi       : Menghitung ada berapa bilangan prima dalam input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.
Diketahui sebuah array A dengan 10 elemen, hitunglah ada berapa bilangan prima pada array A tersebut.

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
    int input[11], i = 0, banyak = 0;

    //Process
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &input[i]);

        if (prime(input[i]) == 1)
        {
            banyak++;
        }
        
    }

    printf("%d\n", banyak);
    return 0;
}