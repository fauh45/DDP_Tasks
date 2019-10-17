/* Program      : Couple_MuhammadFauzanLubis.c
Deskripsi       : Mencari apakah input ada setelah satu sama lain
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Diketahui sebuah array 1 dimensi bertipe char bernama X dengan isi sebagai berikut: JRKPolban
Buatlah program untuk memeriksa apakah huruf yang berpasangan ada di dalam array atau tidak. (Huruf kecil dan besar dianggap sama.)

======================================*/
#include <stdio.h>
#include <ctype.h>

int main() {
    //Declaration
    char huruf1, huruf2, X[10] = "JTKPolban";
    int i = 0, ada = 0;

    //Process
    scanf("%c %c", &huruf1, &huruf2);

    for (i = 0; i < 9; i++)
    {
        if (tolower(huruf2) == tolower(X[i]) && tolower(huruf1) == tolower(X[i + 1]))
        {
            ada = 1;
            printf("ada\n");
            break;
        }
        
    }

    if (ada == 0)
    {
        printf("tidak ada\n");
    }
    
    return 0;
}