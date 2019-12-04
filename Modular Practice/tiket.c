#include <stdio.h>

int under4 = 0, under12 = 0, upper12 = 0 , total = 0;

int Ticket(int age);
void cummulative(int age);

int main() 
{
    int n, age[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", Ticket(age[i]));
    }
    return 0;
}

int Ticket(int age)
{
    if (age < 4)
    {
        return 0;
    }
    else if (age < 12)
    {
        return 25000;
    }
    else
    {
        return 35000;
    }
    
    cummulative(age);
}

void cummulative(int age)
{
    if (age < 4)
    {
        under4++;
    }
    else if (age < 12)
    {
        under12++;
        total += 25000;
    }
    else
    {
        upper12++;
        total += 35000;
    }
}