/* Program      : Challenge05_MuhammadFauzanLubis.c
Deskripsi       : Menentukan pemenang pemilu
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Pemilihan umum telah berakhir. Sekarang, saatnya menghitung perolehan suara!
Terdapat N kandidat dan M daerah pemilihan. Jika perolehan suara setiap kandidat di masing-masing diketahui, tentukan siapa pemenangnya!

======================================*/
#include <stdio.h>
#include <string.h>

int max(int arr[], int n)
{
    int i, pos = 0;
    int max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    }

    return pos + 1;
}

int main()
{
    //Declaration
    int i, j, k, t, n[101], m[101], v[1001], temp = 0, place[101];

    //Process
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        memset(v, 0, sizeof(v));
        scanf(" %d %d", &n[i], &m[i]);

        for (j = 0; j < m[i]; j++)
        {
            for (k = 0; k < n[i]; k++)
            {
                scanf(" %d", &temp);
                v[k] += temp;
            }
        }

        place[i] = max(v, n[i]);
    }

    for (i = 0; i < t; i++)
    {
        printf("%d\n", place[i]);
    }

    return 0;
}