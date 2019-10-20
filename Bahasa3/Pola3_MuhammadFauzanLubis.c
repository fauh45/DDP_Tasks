/* Program      : Pola3_MuhammadFauzanLubis.c
Deskripsi       : Mebuat pola sebanyak input dengan deret
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk membuat pola seperti pada contoh input dan contoh output.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int i = 0, n = 0, input, out = 1;

    //Process
    scanf("%d", &input);

    for (i = input - 1; i >= 0; i--)
    {
        for (n = 0; n <= i; n++)
        {
            if (n == i)
            {
                printf("%d", out);
            }
            else
            {
                printf("%d ", out);
            }

            out++;
            
        }
        
        if (i != 0)
        {
            printf("\n");
        }
        
    }

    return 0;
}