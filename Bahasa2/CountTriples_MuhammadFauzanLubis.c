/* Program      : CountTriples_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan berapa banyak pasangan 3 char
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk menghitung jumlah kemunculan tiga buah huruf berpasangan (tidak terpisah oleh spasi) yang ada di dalam sebuah array karakter, dengan ketentuan bahwa huruf besar dengan huruf kecil dianggap sama. 

======================================*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //Declaration
    char input[41], huruf1, huruf2, huruf3;
    int i = 0, hitung = 0;

    //Process
    gets(input);
    scanf("%c %c %c", &huruf1, &huruf2, &huruf3);

    while (i <= strlen(input) - 2)
    {
        if (tolower(input[i]) == tolower(huruf1) && tolower(input[i + 1]) == tolower(huruf2) && tolower(input[i + 2]) == tolower(huruf3))
        {
            hitung++;
        }

        i++;
        
    }
    
    printf("%d\n", hitung);

    return 0;
}