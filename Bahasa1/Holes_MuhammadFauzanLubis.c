/* Program      : Holes_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan jumlah 'bolongan' dalam kata
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Seorang programmer menulis suatu teks pada sebuah kertas dan sekarang dia ingin mengetahui berapa banyak "lubang" yang terdapat pada teks tersebut.
Apa yang dimaksud dengan “lubang”?
Huruf-huruf seperti ‘A’, ‘D’, ‘O’, dan ‘P’ mempunyai satu lubang. Huruf seperti ‘B’ mempunyai 2 lubang. Sedangkan huruf-huruf seperti ‘C’, ‘E’, dan ‘F’ serta sejenisnya tidak memiliki lubang.
Jadi, dapat dikatakan bahwa jumlah lubang pada teks tersebut sama dengan jumlah total lubang dari setiap huruf yang ada.
Bantulah programmer tersebut untuk menghitung berapa banyak lubang yang terdapat pada sebuah teks dengan membuat sebuah program!

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char masuk[51];
    int i = 0, jumlah = 0;

    //Process
    scanf("%[^\n]s", &masuk);
    
    for (i = 0; i < strlen(masuk); i++)
    {
        switch (masuk[i])
        {
        case 'A':
        case 'D':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
            jumlah++;
            break;

        case 'B':
            jumlah = jumlah + 2;
            break;
        
        default:
            break;
        }
    }

    printf("%d\n", jumlah);
    
    return 0;
}