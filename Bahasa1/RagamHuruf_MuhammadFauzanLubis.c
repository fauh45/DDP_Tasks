/* Program      : RagamHuruf_MuhammadFauzanLubis.c
Deskripsi       : Menapilkan jumlah ragam kata
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Pada kata “Politeknik”, ada delapan ragam jenis huruf, yaitu ‘p’, ‘o’, ‘l’, ‘i’ (yang muncul dua kali), ‘t’, ‘e’, ‘k’ (yang muncul dua kali), dan ‘n’.
Buatlah sebuah program untuk menghitung ragam jenis huruf dari sebuah string yang dibaca. (Huruf kecil dan huruf besar dianggap sama.)

======================================*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //Declaration
    char masuk[27], berbeda[27];
    int i = 0, n = 0, ada = 0, banyak = 0;

    //Process
    scanf("%[^\n]s", &masuk);
    
    for (i = 0; i < strlen(masuk); i++)
    {
        ada = 0;
        n = 0;

        while (ada != 1 && n < strlen(masuk))
        {
            if (tolower(masuk[i]) == berbeda[n])
            {
                ada = 1;
            }

            n++;
        }
        
        if (ada == 0)
        {
            berbeda[i] = tolower(masuk[i]);
            banyak++;
        }
        
    }

    printf("%d", banyak);

    return 0;
}