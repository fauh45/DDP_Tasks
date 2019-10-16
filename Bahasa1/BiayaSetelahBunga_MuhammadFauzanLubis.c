/* Program      : BiayaSetelahBunga_MuhammadFauzanLubis.c
Deskripsi       : Program akan mengembalikan value input dengan value awal ditambah dengan bunga
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah (lengkapilah) program di bawah ini, untuk menghitung total biaya yang harus dibayar, jika diketahui biaya awal dan persen bunga pembayarannya (total biaya = biaya awal + biaya bunga).

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    float masuk, bunga;
    float hasil = 0;

    //Process
    scanf("%f\n%f", &masuk, &bunga);

    hasil = (float) (masuk * bunga / 100) + masuk;
    printf("%.2f\n", hasil);

    return 0;
}