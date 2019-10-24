/* Program      : KelerengSangatMudah_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan warna kelereng
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 24 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Terdapat sejumlah kelereng berwarna Merah (M), kelereng berwana Biru (B) dan kelereng berwarna Kuning (K), dalam sebuah wadah  (W) dengan jumlah 5 kelereng. Buatlah Program untuk menentukan warna dari setiap kelereng yang terdapat di dalam wadah tersebut.

======================================*/
#include <stdio.h>
#include <string.h>

int main()
{
    //Declaration
    char input;

    //Process
    scanf("%c", &input);

    switch (input)
    {
    case 'M':
        printf("Kelereng Merah\n");
        break;

    case 'B':
        printf("Kelereng Biru\n");
        break;

    case 'K':
        printf("Kelereng Kuning\n");
        break;

    default:
        break;
    }

    return 0;
}