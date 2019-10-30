/* Program      : Challenge06_MuhammadFauzanLubis.c
Deskripsi       : Mencari banyak nilai elemen a > elemen b
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 17 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Buatlah sebuah program yang dapat menentukan jumlah pemetaan yang dapat dibuat dari himpunan A ke himpunan B. Syarat pemetaan adalah nilai elemen A > nilai elemen B. Himpunan A dan B masing-masing berisi bilangan bulat.
Contoh:
A = {9, 1, 7, 5, 2}
B = {5, 6, 2}
maka ada 7 pasang A × B yang memenuhi syarat A > B, yaitu {(9, 5), (9, 6), (9, 2), (7, 5), (7, 6), (7, 2), (5, 2)}.

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int i, j, n, m, banyak = 0, a[20001], b[20001];

    //Process
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }

    for (i = 0; i < m; i++)
    {
        scanf(" %d", &b[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] > b[j])
            {
                banyak++;
            }
            
        }
    }

    printf("%d\n", banyak);
    return 0;
}