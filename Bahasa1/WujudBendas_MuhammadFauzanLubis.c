/* Program      : WujudBendas_MuhammadFauzanLubis.c
Deskripsi       : Menenentukan wujud benda sesuai dengan input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Suatu benda dikatakan berwujud cair jika suhunya berada di kisaran 0 s.d. 100 °C. Selain itu, benda dikatakan berwujud non cair.
Buatlah sebuah program untuk menentukan wujud suatu benda jika diketahui suhunya.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    float suhu;

    //Process
    scanf("%f", &suhu);

    if (suhu < 0 || suhu > 100)
    {
        printf("berwujud non cair\n");
    }
    else
    {
        printf("berwujud cair\n");
    }
    
    return 0;
}