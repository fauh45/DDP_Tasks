/* Program      : Vokal_MuhammadFauzanLubis.c
Deskripsi       : Memeriksa Huruf Vokal
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menentukan apakah suatu karakter merupakan huruf vokal atau bukan.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int vokal[11] = {'a', 'A', 'i', 'I', 'u', 'U', 'e', 'E', 'o', 'O'}, i, isvokal = 0;
    char masuk;


    //Process
    scanf("%c", &masuk);

    for (i = 0; i < 11; i++)
    {
        if (masuk == vokal[i])
        {
            isvokal = 1;
        }
        
    }
    
    if (isvokal == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
    
    return 0;
}