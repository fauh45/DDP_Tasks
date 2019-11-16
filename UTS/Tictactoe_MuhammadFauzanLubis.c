/* Program      : Tictactoe_MuhammadFauzanLubis.c
Deskripsi       : Mencari pemenang tictactoe
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 07 November 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Sebuah permainan TicTacToe (catur jawa) adalah sebuah permainan yang terkenal dan dimainkan oleh 2 orang. Seorang pemain akan mendapatkan kemenangan jika dapat membentuk satu garis (horizontal, vertikal atau diagonal). Namun jika tidak ada pemain yang dapat membentuk garis lurus, maka permainan akan berakhir dengan “seri”.
Pada kasus ini, papan permainan terdiri atas 9 kotak (panjang 3  kotak, dan lebar 3 kotak), dan berisi data berupa huruf  ‘a’ ,‘b’  (menyatakan 2 pemain), dan ‘x’ yang menandakan kotak kosong
Buatlah program untuk menentukan “status” kondisi sebuah permainan, yakni  : “a menang”, “b menang”, atau “seri”.
Bila salah satu bidak menang maka sertakan pula posisi bidak-bidaknya.
Input selalu benar artinya tidak akan ada input yang hasil akhirnya “a dan b menang” 

======================================*/

#include <stdio.h>

int main()
{
    //Declaration
    char board[4][4];
    int i, menang = 0;

    //Process
    for (i = 0; i < 3; i++)
    {
        scanf(" %c %c %c", &board[i][0], &board[i][1], &board[i][2]);
        // printf("%c %c %c\n", board[i][0], board[i][1], board[i][2]);
    }

    printf("%c %c %c\n", board[0][0], board[1][1], board[2][2]);
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == board[2][2] && board[0][0] != 'x' && board[1][1] != 'x' && board[2][2] != 'x')
    {
        menang = 1;
        printf("%c menang\n", board[0][0]);
        printf("(1,1),(2,2),(3,3)");
    }

    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == board[2][0] && board[0][2] != 'x' && board[1][1] != 'x' && board[2][0] != 'x')
    {
        menang = 1;
        printf("%c menang\n", board[2][0]);
        printf("(%d,1),(%d,2),(%d,3)", i, i, i);
    }

    if (menang == 0)
    {
        for (i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] == board[i][2] && board[i][0] != 'x' && board[i][1] != 'x' && board[i][2] != 'x')
            {
                menang = 1;
                printf("%c menang\n", board[i][0]);
                printf("(%d,1),(%d,2),(%d,3)", i, i, i);
                break;
            }

            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] == board[2][i] && board[0][i] != 'x' && board[1][i] != 'x' && board[2][i] != 'x')
            {
                menang = 1;
                printf("%c menang\n", board[0][i]);
                printf("(1,%d),(2,%d),(3,%d)", i, i, i);
                break;
            }
        }
    }

    if(menang == 0)
    {
        printf("seri");
    }

    return 0;
}