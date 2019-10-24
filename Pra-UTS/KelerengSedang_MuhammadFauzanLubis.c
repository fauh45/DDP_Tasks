/* Program      : KelerengSedang_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan jumlah warna kelereng
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 24 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Terdapat sejumlah kelereng berwarna Merah (M) dan kelereng berwana Biru (B) dalam sebuah wadah  (W) dengan jumlah N kelereng.
Buatlah Program untuk menghitung jumlah kelereng Warna merah dan Warna biru.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char input[6], temp[10];
    int i, jmerah = 0, jbiru = 0, jml;

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
        
        default:
            break;
        }

    }

    printf("%d\n%d\n", jmerah, jbiru);

    return 0;
}