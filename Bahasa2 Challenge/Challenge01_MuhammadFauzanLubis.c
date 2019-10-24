/* Program      : Challenge01_MuhammadFauzanLubis.c
Deskripsi       : Mencari kode dari input
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      :Sebuah pangkalan militer melakukan penyandian terhadap pesan yang mereka kirimkan ke markas. Ketentuan penyandian adalah sebagai berikut:
Setiap huruf akan diubah menjadi angka berdasarkan tabel berikut:
Maksud dari tabel di atas adalah huruf A, B, atau C dapat disandikan menjadi angka 1; huruf D, E, atau F disandikan menjadi angka 2; dan seterusnya.
Untuk membedakan huruf yang memiliki sandi angka yang sama, penulisan angka diulang sebanyak posisi huruf yang disandikan oleh angka tersebut.
Contoh: A disandikan menjadi 1; B disandikan menjadi 11; O disandikan menjadi 555.
Dua huruf bersebelahan yang memiliki sandi angka yang sama, dipisahkan dengan -1.
Contoh: NOT disandikan menjadi 55-155577
Spasi disandikan dengan 0.
Penulisan pesan tidak boleh menggunakan karakter selain huruf dan spasi.
Huruf besar dan huruf kecil dianggap sama.

======================================*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    //Declaration
    char input[31];
    int i, n, lon, prt;

    //Process
    gets(input);

    for (i = 0; i < strlen(input); i++)
    {
        lon = (toupper(input[i]) - 64) % 3;
        prt = (toupper(input[i]) - 64) / 3;

        if (lon == 0)
        {
            lon = 3;
            prt -= 1;
        }

        if (i != 0 && (((toupper(input[i - 1]) - 64) / 3) + 1) == (prt + 1))
        {
            if (((toupper(input[i - 1]) - 64) % 3) != 0 || toupper(input[i - 1]) == toupper(input[i]))
            {
                printf("-1 ");
            }
        }

        if (input[i] == ' ')
        {
            printf("0 ");
        }

        if (i == strlen(input) - 1)
        {
            for (n = 0; n < lon; n++)
            {
                if (n == lon - 1)
                {
                    printf("%d", prt + 1);
                }
                else
                {
                    printf("%d ", prt + 1);
                }
                
            }
        }
        else
        {
            for (n = 0; n < lon; n++)
            {
                printf("%d ", prt + 1);
            }
        }
    }
    printf("\n");

    return 0;
}