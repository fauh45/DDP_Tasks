/* Program      : MinSepuluhData_MuhammadFauzanLubis.c
Deskripsi       : Mencari nilai terkecil dari 2 array
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah program untuk menentukan nilai terkecil dari dua buah array yang masing masing berisi 10 buah bilangan bulat. Gunakan konsep modular untuk menyelesaikan soal berikut, gunakan fungsi yang sudah pernah dibuat pada soal sebelumnya.

======================================*/

#include <stdio.h>

int min(int num1, int num2);
int minValueNuber(int input[], int N);
void inputVal(int number[], int N);

int main() {
    //Declaration
    const int MAX_DATA = 10;
    int numbers1[MAX_DATA], numbers2[MAX_DATA];

    //Process
    inputVal(numbers1, MAX_DATA);
    inputVal(numbers2, MAX_DATA);

    printf("%d %d", minValueNuber(numbers1, MAX_DATA), minValueNuber(numbers2, MAX_DATA));

    return 0;
}

int min(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int minValueNuber(int input[], int N)
{
    int i, mins;
    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            mins = input[i];
        }
        else
        {
            mins = min(mins, input[i]);
        }
        
    }

    return mins;
}

void inputVal(int number[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &number[i]);
    }
}