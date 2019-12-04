#include <stdio.h>

void Bankamatik(int uang, int jml[]);

int nominal[] = {100000, 50000, 10000, 5000, 1000};

int main() {
    int uang, jml[5];
    scanf("%d", &uang);
    Bankamatik(uang, jml);
    for (int i = 0; i < 5; i++)
    {
        if (jml[i] == 0)
        {
            continue;
        }
        printf("%d x %d ", jml[i], nominal[i]);
    }
    return 0;
}

void Bankamatik(int uang, int jml[])
{
    int i = 0;

    while (i<5 && uang != 0)
    {
        jml[i] = 0;
        while (uang - nominal[i] >= 0)
        {
            uang -= nominal[i];
            jml[i]++;
        }
        i++;

    }
    
}