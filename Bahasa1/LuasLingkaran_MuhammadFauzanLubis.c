/* Program      : LuasLingkaran_MuhammadFauzanLubis.c
Deskripsi       : Menghitung luas lingkaran dari jari-jari
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Lengkapilah prototipe di bawah ini untuk menghitung luas lingkaran jika diketahui jari-jarinya.
Rumus: L = π × R2, dengan L menunjukkan luas lingkaran, R menunjukkan jari-jari lingkaran, dan πbernilai 3.14.
Perhatikan prototype : Setelah menampilkan nilai L harus selalu diikuti Enter (\n)

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    float hasil, r = 0;

    //Process
    scanf("%f", &r);

    hasil = r * r * 3.14;
    printf("%.2f\n", hasil);

    return 0;
}