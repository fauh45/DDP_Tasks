/* Program      : Pola2_MuhammadFauzanLubis.c
Deskripsi       : Mebuat pola sebanyak input dengan deret
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk membuat pola seperti pada contoh input dan contoh output.

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    int i = 0, n = 0, input, out = 0;

    //Process
    scanf("%d", &input);

    for (i = 0; i < input; i++)
    {
        out = pow(2, i);

        for (n = 0; n <= i; n++)
        {
            if (n == i)
            {
                printf("1");
            }
            else
            {
                printf("%d ", out);
            }

            out = out / 2;
            
        }

        if (i != input - 1)
        {
            printf("\n");
        }
        
    }

    return 0;
}