/* Program      : Limas_MuhammadFauzanLubis.c
Deskripsi       : Menghitung volume limas
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung volume limas dengan alas segi empat.
Rumus: V = 1 / 3 × P × L × T, dengan V menunjukkan volume, P menunjukkan panjang alas limas, L menunjukkan lebar alas limas, dan T menunjukkan tinggi limas.

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    float volume;
    float panjang, lebar, tinggi; 

    //Process
    scanf("%f\n%f\n%f", &panjang, &lebar, &tinggi);

    volume = panjang * lebar * tinggi * 1/3;
    printf("%.6f\n", volume);

    return 0;
}