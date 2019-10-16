/* Program      : Sort3Desc_MuhammadFauzanLubis.c
Deskripsi       : Sorting 3 nilai input menurut descending order
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk mengurutkan tiga data integer yang dimasukkan secara descending (dari besar ke kecil).

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int input[3], i = 0, temp, maks = 0, min, indexmaks, indexmin;

    //Process
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &input[i]);
    }

    for (i = 1; i < 3; i++)
    {
        if (input[i - 1] < input[i])
        {
            temp = input[i];
            input[i] = input[i - 1];
            input[i - 1] = temp;
        }
        
    }

    if (input[1] > input[0])
    {
        temp = input[0];
        input[0] = input[1];
        input[1] = temp;
    }
    
    printf("%d %d %d", input[0], input[1], input[2]);

    return 0;
}