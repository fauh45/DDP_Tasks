/* Program      : Rerata_MuhammadFauzanLubis.c
Deskripsi       : Mencari rerata
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah fungsi float rerata(int data[], int N) untuk mencari rata-rata dari suatu kumpulan data, kemudian buatlah sebuah program yang menggunakan fungsi tersebut. 
======================================*/

#include <stdio.h>

float rerata(int input[], int N);
void inputVal(int number[], int N);

int main() {
    //Declaration
    const int MAX_DATA = 100;
    int data[MAX_DATA], n;

    //Process
    scanf("%d", &n);
    inputVal(data, n);

    printf("%.2f", rerata(data, n));
    return 0;
}

void inputVal(int number[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }
}

float rerata(int input[], int N)
{
    int i, sum = 0;
    for (i = 0; i < N; i++)
    {
        sum += input[i];
    }
    // printf("%d\n", sum);

    return (float) sum / N;
}