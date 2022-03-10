/*Nama File     :CekSeriPositif.c*/
/*Deskripsi     :Menampilkan dan menghitung penjumlahan dari tiga bilangan integer positif*/
/*Pembuat       :24060121130068-Mitslina*/
/*Tgl Pembuatan :Kamis, 10 Maret 2022*/

#include<stdio.h> /*header file*/

/*program utama*/
int main(){
    /*kamus*/
    int a, b, c;

    /*Algoritma*/
    printf("Program Cek Seri Positif\n");
    printf("Masukan nilai a= \n");
    scanf("%d", &a);
    printf("Masukan nilai b= \n");
    scanf("%d", &b);
    printf("Masukan nilai c= \n");
    scanf("%d", &c);
    if (a<=0 | b<=0 | c<=0) {
        printf("Masukan tahanan tidak boleh negatif\n");
    }
    else {
        printf("Hasil penjumlahan seri positif = %d", a+b+c);
    }
    return 0;
}
