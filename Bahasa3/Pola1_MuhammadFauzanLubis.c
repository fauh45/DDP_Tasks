/* Program      : Pola1_MuhammadFauzanLubis.c
Deskripsi       : Mebuat pola sebanyak input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk membuat pola seperti pada contoh input dan contoh output.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int i = 0, n = 0, input;

    //Process
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        for (n = 0; n < i; n++)
        {
            if (n == i - 1)
            {
                printf("*");
            }
            else
            {
                printf("* ");
            }
            
        }

        if (i != input)
        {
            printf("\n");
        }
        
    }

    return 0;
}