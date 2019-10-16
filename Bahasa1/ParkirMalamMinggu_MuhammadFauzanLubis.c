/* Program      : ParkirMalamMinggu_MuhammadFauzanLubis.c
Deskripsi       : Menghitung biaya parkir pada malam minggu
Nama /Author    : Muhammad Fauzan Lubis
Tanggal/versi   : 16 Oktober 2019/1.0
Compiler        : gcc (tdm64-1) 5.1.0
Pertanyaan      : Setiap malam Minggu, Ima pergi dengan “adik angkat”-nya. Ia menyimpan kendaraannya di suatu tempat parkir. Kendaraan yang digunakan Ima ketika bermalam Minggu bisa motor ataupun mobil, tergantung “adik angkat”-nya ingin dijemput dengan apa.
Di tempat parkir tersebut, ketentuan yang berlaku adalah:
Parkir mobil: Rp1.500/jam
Parkir motor: Rp1.000/jam
Jika kendaraan sudah parkir lebih dari 5 jam, maka akan kena tarif tambahan sebesar Rp500/jam (baik motor maupun mobil).
Jika kendaraan sudah parkir lebih dari 8 jam, maka kendaraan akan disegel oleh pengelola parkir.
Malam Minggu ini Ima sedang kesepian, dan ia mengajakmu sebagai “adik angkat”-nya Ima. Sebagai “adik angkat” yang baik, bantulah Ima untuk menentukan biaya parkir yang harus dibayar dan memberitahu jika kendaraannya ternyata harus disegel!

======================================*/
#include <stdio.h>

int main() {
    //Declaration
    int jenis, waktu, total;

    //Process
    scanf("%d\n%d", &jenis, &waktu);
    if (waktu > 8)
    {
        printf("disegel\n");
    }
    else
    {
        if (jenis == 1)
        {
            if (waktu > 5)
            {
                printf("%d\n", ((waktu - 5) * 500) + (waktu * 1500));
            }
            else
            {
                printf("%d\n", waktu * 1500);
            }
            
        }
        else
        {
            if (waktu > 5)
            {
                printf("%d\n", ((waktu - 5) * 500) + (waktu * 1000));
            }
            else
            {
                printf("%d\n", waktu * 1000);
            }
            
        }
        
    }
    
    return 0;
}