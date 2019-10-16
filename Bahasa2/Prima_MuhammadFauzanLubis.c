/* Program      : Prima_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan input adalah bilangan prima tau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Dalam matematika, bilangan prima adalah bilangan asli yang lebih besar dari angka 1, yang faktor pembaginya adalah 1 dan bilangan itu sendiri.
Diketahui bilangan X, tentukanlah apakah X merupakan bilangan prima atau bukan.

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
    int masuk;
    scanf("%d", &masuk);

    if (prime(masuk) == 1)
    {
        printf("prima\n");
    }
    else
    {
        printf("bukan prima\n");
    }
    
    return 0;
}