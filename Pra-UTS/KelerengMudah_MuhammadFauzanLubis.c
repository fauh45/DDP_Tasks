/* Program      : KelerengMudah_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan warna kelereng
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 24 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Terdapat sejumlah kelereng berwarna Merah (M), kelereng berwana Biru (B) dan kelereng berwarna Kuning (K), dalam sebuah wadah  (W) dengan jumlah 5 kelereng. Buatlah Program untuk menentukan warna dari setiap kelereng yang terdapat di dalam wadah tersebut.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char input[6], temp[10];
    int i;

    //Process
    scanf("%[^\n]", &input);

    for (i = 0; i < 5; i++)
    {
        switch (input[i])
        {
        case 'M':
            strcpy(temp, "Merah");
            break;
        
        case 'B':
            strcpy(temp, "Biru");
            break;

        case 'K':
            strcpy(temp, "Kuning");
            break;

        default:
            break;
        }

        if (i != 4)
        {
            printf("%s ", temp);
        }
        else
        {
            printf("%s\n", temp);
        }
    }

    return 0;
}