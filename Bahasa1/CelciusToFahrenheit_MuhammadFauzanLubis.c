/* Program      : CelciusToFarenheit_MuhammadFauzanLubis.c
Deskripsi       : Program akan mengembalikan value input dalam celcius dengan value terkonversi dalam farenheit
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah (lengkapilah)  program untuk mengonversi suhu dalam satuan Celcius menjadi suhu dalam satuan Fahrenheit.
Note            : °F = °C × 1,8 + 32

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    float masuk;
    float hasil = 0;

    //Process
    scanf("%f", &masuk);

    hasil = (float) (masuk * 1.8) + 32;
    printf("%.2f\n", hasil);

    return 0;
}