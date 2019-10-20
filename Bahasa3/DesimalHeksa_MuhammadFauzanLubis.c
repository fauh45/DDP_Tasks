/* Program      : DesimalHeksa_MuhammadFauzanLubis.c
Deskripsi       : Konversi desimal ke heksadesimal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk mengonversi bilangan desimal ke bilangan heksadesimal (basis 16).

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int desimal, i = 0, temp;
    char heksa[33];

    //Process
    scanf("%d", &desimal);

    while (desimal > 0)
    {
        temp = desimal % 16;
        desimal = desimal / 16;
        
        switch (temp)
        {
        case 10:
            heksa[i] = 'A';
            break;
        
        case 11:
            heksa[i] = 'B';
            break;

        case 12:
            heksa[i] = 'C';
            break;

        case 13:
            heksa[i] = 'D';
            break;

        case 14:
            heksa[i] = 'E';
            break;

        case 15:
            heksa[i] = 'F';
            break;

        default:
            heksa[i] = (char) temp + '0';
            break;
        }

        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", heksa[i]);
    }
    
    return 0;
}