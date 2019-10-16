/* Program      : Parkir_MuhammadFauzanLubis.c
Deskripsi       : Menghitung biaya parkir
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung total biaya parkir motor atau mobil dengan ketentuan berikut:
Mobil dikenakan tarif Rp2.000 untuk satu jam pertama dan Rp1.000 untuk setiap satu jam berikutnya;
Motor dikenakan tarif Rp1.000 untuk satu jam pertama dan Rp5.00 untuk setiap satu jam berikutnya.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int jenis, waktu, total;

    //Process
    scanf("%d\n%d", &jenis, &waktu);

    if (jenis == 1)
    {
        printf("%d\n", (waktu - 1) * 1000 + 2000);
    }
    else
    {
        printf("%d\n", (waktu - 1) * 500 + 1000);
    }
    
    return 0;
}