/* Program      : MaxSepuluhData_MuhammadFauzanLubis.c
Deskripsi       : Mencari nilai tebesar dari 2 array
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan nilai terbesar dari dua buah array yang masing masing berisi 10 buah bilangan bulat. Gunakan konsep modular untuk menyelesaikan soal berikut, gunakan fungsi yang sudah pernah dibuat pada soal sebelumnya.
======================================*/

#include <stdio.h>

int max(int num1, int num2);
int maxValueNuber(int input[], int N);
void inputVal(int number[], int N);

int main() {
    //Declaration
    const int MAX_DATA = 10;
    int numbers1[MAX_DATA], numbers2[MAX_DATA];

    //Process
    inputVal(numbers1, MAX_DATA);
    inputVal(numbers2, MAX_DATA);

    printf("%d %d", maxValueNuber(numbers1, MAX_DATA), maxValueNuber(numbers2, MAX_DATA));

    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int maxValueNuber(int input[], int N)
{
    int i, maks;
    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            maks = input[i];
        }
        else
        {
            maks = max(maks, input[i]);
        }
        
    }

    return maks;
}

void inputVal(int number[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }
}