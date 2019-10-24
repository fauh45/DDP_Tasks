/* Program      : KelerengSulit_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan jumlah setiap warna kelereng
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 24 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Terdapat sejumlah kelereng berwarna Merah (M),  kelereng berwana Biru (B) dan kelereng berwarna Kuning (K) dalam sebuah wadah  (W) dengan jumlah N kelereng.
Buatlah Program untuk menghitung jumlah kelereng Warna Merah, jumlah kelereng Warna Biru dan jumlah kelereng Warna Kuning.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    char input[16], temp[10];
    int i, jmerah = 0, jbiru = 0, jkuning = 0, jml;

    //Process
    scanf("%d", &jml);
    scanf(" %[^\n]", &input);

    for (i = 0; i < jml; i++)
    {
        switch (input[i])
        {
        case 'M':
            jmerah++;
            break;
        
        case 'B':
            jbiru++;
            break;
        
        case 'K':
            jkuning++;
            break;

        default:
            break;
        }

    }

    printf("%d %d %d\n", jmerah, jbiru, jkuning);

    return 0;
}