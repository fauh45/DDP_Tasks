#include <stdio.h>

void bin(int a, int b[]);

int main() {
    int a, b[8];
    printf("Desimal : ");
    scanf("%d", &a);
    bin(a, b);
    printf("Biner : ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d", b[i]);   
    }
    return 0;
}

void bin(int a, int b[])
{
    for(int i = 0; i < 8; ++i) b[i] = 0;

    if (a > 0)
    {
        int i = 7;
        while (i >= 0 && a > 0)
        {
            b[i] = a%2;
            a = a/2;
            i = i - 1;
        }
        
    }
    
}