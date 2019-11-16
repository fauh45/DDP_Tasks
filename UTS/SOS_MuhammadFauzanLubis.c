/* Program      : SOS_MuhammadFauzanLubis.c
Deskripsi       : Mencari berapa banyak S O S yang terbentuk
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 08 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
======================================*/

#include <stdio.h>

//Global variable
int ARRAY_SIZE_ROW = 3;
int ARRAY_SIZE_COLLUMN = 3;

//Function Declaration
int scanRow(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN]);
int scanCollumn(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN]);
int scanDiagonal(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN]);

int main() {
    //Declaration
    char SOSboard[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN]; 
    int i, j, numberOfSOS = 0;

    //Process
    for (i = 0; i < ARRAY_SIZE_ROW; i++)                        //Row looping
    {
        for (j = 0; j < ARRAY_SIZE_COLLUMN; j++)                //Collumn looping
        {
            scanf(" %c", &SOSboard[i][j]);                       //3x3 SOS board input to array
        }
    }

    numberOfSOS += scanRow(SOSboard);                           //Check row for SOS pattern
    numberOfSOS += scanCollumn(SOSboard);                       //Check collumn for SOS pattern 
    numberOfSOS += scanDiagonal(SOSboard);                      //Check diagonal for SOS pattern

    printf("%d", numberOfSOS);                                  //Outputs the number of SOS pattern

    return 0;
}

/* Function Body */
int scanRow(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN])
{
    /* 
        input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN] : 2d array of SOS Board
    */
    int i, numberOfSOS = 0;

    for (i = 0; i < ARRAY_SIZE_ROW; i++)
    {
        if (input[i][0] == 'S' && input[i][1] == 'O' && input[i][2] == 'S')
        {
            numberOfSOS++;
        }
        
    }

    return numberOfSOS;
}

int scanCollumn(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN])
{
    /* 
        input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN] : 2d array of SOS Board
    */
    int i, numberOfSOS = 0;

    for (i = 0; i < ARRAY_SIZE_COLLUMN; i++)
    {
        if (input[0][i] == 'S' && input[1][i] == 'O' && input[2][i] == 'S')
        {
            numberOfSOS++;
        }
        
    }

    return numberOfSOS;
}

int scanDiagonal(char input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN])
{
    /* 
        input[ARRAY_SIZE_ROW][ARRAY_SIZE_COLLUMN] : 2d array of SOS Board
    */
    int numberOfSOS = 0;

    if (input[0][0] == 'S' && input[1][1] == 'O' && input[2][2] == 'S')
    {
        numberOfSOS++;
    }
    
    if (input[0][2] == 'S' && input[1][1] == 'O' && input[2][0] == 'S')
    {
        numberOfSOS++;
    }
    
    return numberOfSOS;
}