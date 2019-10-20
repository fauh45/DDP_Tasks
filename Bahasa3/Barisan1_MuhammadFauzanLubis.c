/* Program      : Barisan1_MuhammadFauzanLubis.c
Deskripsi       : Menampilkan pola barisan
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah barisan bilangan yang disimpan dalam array satu dimensi bertipe integer dengan 15 elemen. Nama array untuk menyimpan barisan adalah barisanBilangan. Barisan yang akan dibuat memiliki pola sebagai berikut:
3, 6, 10, 15, 18, 22, 27, ...

======================================*/
#include <stdio.h>

int main()
{
    //Declaration
    int input, i, tambah[3] = {3, 4, 5}, temp = 0;

    //Process
    scanf("%d", &input);
    temp = input;

    for (i = 0; i < 15; i++)
    {
        if (i == 14)
        {
            printf("%d", temp);
        }
        else
        {
            printf("%d ", temp);
            temp = temp + (tambah[i % 3]);
        }
        
    }

    return 0;
}