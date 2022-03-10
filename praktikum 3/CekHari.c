/*Nama File     :CekHari.c*/
/*Deskripsi     :Menampilkan dan mengonversi nilai angka ke dalam nama hari*/
/*Pembuat       :24060121130068-Mitslina*/
/*Tgl Pembuatan :Kamis, 10 Maret 2022*/

#include<stdio.h> /*header program*/

/*program utama*/
int main(){
    /*Kamus*/
    int H;

    /*Algoritma*/
    printf("Program Konversi Nama Hari\n");
    printf("Masukan nilai angka = \n");
    scanf("%d", &H);
    switch (H) {
    case 1 :
        printf("Hari ke-1 adalah hari Sabtu\n");
    break;
    case 2 :
        printf("Hari ke-2 adalah hari Ahad\n");
    break;
    case 3 :
        printf("Hari ke-3 adalah hari Senin\n");
    break;
    case 4 :
        printf("Hari ke-4 adalah hari Selasa\n");
    break;
    case 5 :
        printf("Hari ke-5 adalah hari Rabu\n");
    break;
    case 6 :
        printf("Hari ke-6 adalah hari Kamis\n");
    break;
    case 7 :
        printf("Hari ke-7 adalah hari Jumat\n");
    break;
    default :
        printf("Masukan nomor hari tidak tepat\n");
    break;
    }
    return 0;
}
