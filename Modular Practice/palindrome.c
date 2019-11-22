/* Program      : palindrom.c
Deskripsi       : Mencari palindrom dengan modular
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 22 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
======================================*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

/* Fungsi Prototipe */
int howManyPalindrome(char a[256]);
bool isPalindrome(char a[256]);

int main()
{
    char a[256];

    scanf("%[^\n]", &a);
    printf("%d", howManyPalindrome(a));
    return 0;
}

bool isPalindrome(char a[256])
{
    int i, j;

    for (i = 0; i <= strlen(a)/2; i++)
    {
        j = strlen(a) - i - 1;

        // printf("%c %c\n", a[i], a[j]);
        if (tolower(a[i]) != tolower(a[j]))
        {
            return false;
        }
    }

    return true;
}

int howManyPalindrome(char a[256])
{
    char words[256][256];
    int i, j = 0, index = 0, many = 0;

    for (i = 0; i <= strlen(a); i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            index++;
            j = 0;
        }
        else
        {
            words[index][j] = a[i];
            j++;
        }
    }

    for (i = 0; i < index; i++)
    {
        // printf("%s\n", words[i]);
        if (isPalindrome(words[i]))
        {
            many++;
        }
    }

    return many;
}