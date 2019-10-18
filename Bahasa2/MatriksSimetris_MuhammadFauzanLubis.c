/* Program      : MatriksSimetris_MuhammadFauzanLubis.c
Deskripsi       : Cek matriks apakah matriks simetris atau tidak
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 18 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk memeriksa apakah sebuah matriks M merupakan matriks simetris, di mana M adalah sebuah matriks dengan ordo 3 × 3.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int matriks1[4][4], i, n, ada = 0;

    //Process
    for (i = 0; i < 3; i++)
    {
        for (n = 0; n < 3; n++)
        {
            scanf("%d", &matriks1[i][n]);
        }
    }

   for (i = 0; i < 3; i++)
   {
       for (n = 0; n < 3; n++)
       {
           if (matriks1[i][n] == matriks1[n][i])
           {
               ada = 1;
           }
           else
           {
               ada = 0;
               break;
           }
           
           
       }
   }

   if (ada == 1)
   {
       printf("matriks simetris\n");
   }
   else
   {
       printf("bukan matriks simetris\n");
   }
   
    return 0;
}