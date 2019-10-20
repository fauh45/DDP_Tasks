/* Program      : DecimalToRoman_MuhammadFauzanLubis.c
Deskripsi       : Desimal ke Roman
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Seorang arkeolog bernama Pak Wono harus menyampaikan isi suatu literatur kuno kepada temannya, Pak Hamzi. Namun, literatur kuno tersebut isinya panjang sekali. Beruntung, Pak Wono menyadari bahwa mayoritas isi literatur kuno tersebut adalah angka Romawi (yang panjang-panjang). Pak Wono kemudian menyalin angka Romawi tersebut ke sebuah kertas dalam bentuk angka desimal supaya penulisannya lebih singkat.
Ketika tiba di kediaman Pak Hamzi, Pak Wono mengeluarkan kertas berisi angka-angka desimal yang dicatatnya sebelum berangkat. Namun, karena Pak Wono sudah tua, Pak Wono lupa cara mengonversi angka desimal yang ditulisnya kembali ke angka Romawi. (Pak Hamzi pun demikian – keduanya sama-sama sudah tua.)
Pak Wono kemudian melihat Anda sedang bermain komputer di pojok ruangan Pak Hamzi. Menyadari Anda adalah seorang mahasiswa yang sedang belajar informatika di POLBAN, Pak Wono kemudian meminta Anda membuatkannya program untuk mengonversi angka desimal menjadi angka Romawi.

======================================*/
#include <stdio.h>
#include <math.h>

int main() {
    //Declaration
    int i = 0, desimal, temp = 0;
    char roman[16];

    //Process
    scanf("%d", &desimal);

    while (desimal != 0)
    {
        if (desimal >= 1000)
        {
            printf("M");
            desimal = desimal - 1000;
        }

        else if (desimal >= 900)
        {
            printf("CM");
            desimal = desimal - 900;
        }

        else if (desimal >= 500)
        {
            printf("D");
            desimal = desimal - 500;
        }

        else if (desimal >= 400)
        {
            printf("CD");
            desimal = desimal - 400;
        }

        else if (desimal >= 100)
        {
            printf("C");
            desimal = desimal - 100;
        }

        else if (desimal >= 90)
        {
            printf("XC");
            desimal = desimal - 90;
        }

        else if (desimal >= 50)
        {
            printf("L");
            desimal = desimal - 50;
        }

        else if (desimal >= 40)
        {
            printf("XL");
            desimal = desimal - 40;
        }

        else if (desimal >= 10)
        {
            printf("X");
            desimal = desimal - 10;
        }

        else if (desimal >= 9)
        {
            printf("IX");
            desimal = desimal - 9;
        }

        else if (desimal >= 5)
        {
            printf("V");
            desimal = desimal - 5;
        }

        else if (desimal >= 4)
        {
            printf("IV");
            desimal = desimal - 4;
        }

        else if (desimal >= 1)
        {
            printf("I");
            desimal = desimal - 1;
        }
        
    }
    
    return 0;
}