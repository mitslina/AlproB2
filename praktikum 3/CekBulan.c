/*Nama File     :CekBulan.c*/
/*Deskripsi     :Menampilkan dan mengonversi nilai angka ke dalam nama bulan*/
/*Pembuat       :24060121130068-Mitslina*/
/*Tgl Pembuatan :Kamis, 10 Maret 2022*/

#include<stdio.h> /*header program*/

/*program utama*/
int main(){
    /*Kamus*/
    int B;

    /*Algoritma*/
    printf("Program Konversi Nama Bulan\n");
    printf("Masukan nilai angka = \n");
    scanf("%d", &B);
    if (B==1){
        printf("Hasil konversi nilai 1 adalah bulan Januari\n");
    }
    else if (B==2){
        printf("Hasil konversi nilai 2 adalah bulan Februari\n");
    }
    else if (B==3){
        printf("Hasil konversi nilai 3 adalah bulan Maret\n");
    }
    else if (B==4){
        printf("Hasil konversi nilai 4 adalah bulan April\n");
    }
    else if (B==5){
        printf("Hasil konversi nilai 5 adalah bulan Mei\n");
    }
    else if (B==6){
        printf("Hasil konversi nilai 6 adalah bulan Juni\n");
    }
    else if (B==7){
        printf("Hasil konversi nilai 7 adalah bulan Juli\n");
    }
    else if (B==8){
        printf("Hasil konversi nilai 8 adalah bulan Agustus\n");
    }
    else if (B==9){
        printf("Hasil konversi nilai 9 adalah bulan September\n");
    }
    else if (B==10){
        printf("Hasil konversi nilai 11 adalah bulan Oktober\n");
    }
    else if (B==11){
        printf("Hasil konversi nilai 12 adalah bulan November\n");
    }
    else if (B==12){
        printf("Hasil konversi nilai 2 adalah bulan Desember\n");
    }
    else{
        printf("Masukan niali dengan benar\n");
    }
    return 0;
}
