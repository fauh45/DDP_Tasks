/* Program      : Strcmp_MuhammadFauzanLubis.c
Deskripsi       : Mengcompare 2 string
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program untuk membandingkan dua buah kata pada array karakter dengan maksimal masing-masing berjumlah 10 elemen.
Huruf besar berbeda dengan huruf kecil. Gunakan kode ASCII untuk membandingkan.

======================================*/
#include <stdio.h>
#include <string.h>

int main() {
    //Declaration
    char str1[11], str2[11];
    int i = 0, sama = 0;

    //Process
    gets(str1);
    gets(str2);

    for (i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] - str2[i] > 0)
            {
                printf("+%d\n", str1[i] - str2[i]);
            }
            else
            {
                printf("%d\n", str1[i] - str2[i]);
            }
            
            printf("%d\n", i + 1);

            sama = 0;

            break;
        }
        else
        {
            sama = 1;
        }

    }

    if (sama == 1)
    {
        printf("0\n0\n");
    }
    
    
    return 0;
}