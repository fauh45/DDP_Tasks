/* Program      : Dibawah_MuhammadFauzanLubis.c
Deskripsi       : Mencari nilai di bawah rata rata
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 20 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Bu Trisna kali ini sedang kesal dengan salah satu kelasnya, karena ternyata banyak muridnya yang tidak mengerjakan PR, bahkan ada yang sering membolos! Oleh karena itu ia ingin mengetahui berapa banyak muridnya yang bermasalah, dengan hanya menganalisis daftar nilai yang dimilikinya.
Karena kesal, Bu Trisna tidak dapat berhitung dengan benar. Oleh karena itu, ia meminta bantuan Anda untuk menghitung berapa murid di kelasnya yang memiliki nilai di bawah rata-rata.
Adapun nilai rata-rata dapat Anda hitung dengan cara menjumlahkan nilai dari semua murid, kemudian dibagi dengan jumlah murid. Untuk lebih jelasnya, Anda dapat memperhatikan contoh berikut ini.
Misalnya terdapat 4 orang murid, dengan nilai 25, 20, 30 dan 90 (terlihat kan, mana murid yang bermasalah dan mana yang tidak...). Rata-rata kelas dapat dihitung dengan mudah, yaitu (25+20+30+90) / 4 = 41,25. Oleh karena itu, dalam kasus ini, terdapat 3 orang murid yang nilainya di bawah rata-rata (yaitu murid yang nilainya 25, 20 dan 30).

======================================*/
#include <stdio.h>

int main()
{
    //Declaration
    int nilai[10001], count = 0, banyak, i;
    long temp = 0;
    float rata = 0;

    //Process
    scanf("%d", &banyak);

    for (i = 0; i < banyak; i++)
    {
        scanf("%d", &nilai[i]);
        temp = temp + nilai[i];
    }

    rata = (float) temp / banyak;

    for (i = 0; i < banyak; i++)
    {
        if (nilai[i] < rata)
        {
            count++;
        }
        
    }

    printf("%d", count);

    return 0;
}