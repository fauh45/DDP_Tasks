/* Program      : Alay_MuhammadFauzanLubis.c
Deskripsi       : M3n3ntuk4n t3ks 4l4y
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk mengubah suatu kalimat ke dalam bentuk “alay”.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    char masuk[51];
    int i;

    //Process
    scanf("%[^\n]s", &masuk);
    for (i = 0; i <= sizeof(masuk)/sizeof(masuk[0]); i++)
    {
        switch (masuk[i])
        {
        case 'A':
        case 'a':
            masuk[i] = '4';
            break;

        case 'I':
        case 'i':
            masuk[i] = '1';
            break;

        case 'Z':
        case 'z':
            masuk[i] = '2';
            break;

        case 'E':
        case 'e':
            masuk[i] = '3';
            break;

        case 'G':
        case 'g':
            masuk[i] = '6';
            break;

        case 'J':
        case 'j':
            masuk[i] = '7';
            break;

        case 'B':
        case 'b':
            masuk[i] = '8';
            break;

        default:
            break;

        }
    }
    
    printf("%s\n", masuk);
    return 0;
}