/*Nama File     :TunjAnak.c*/
/*Deskripsi     :Menghitung tunjangan anak berdasarkan jumlah anak dan gaji pokok*/
/*Pembuat       :Mitslina-24060121130068*/
/*Tgl Pembuatan :Kamis, 17 Maret 2022*/

#include<stdio.h>

int main(){
    /*Kamus*/
    int A, G;
    int tunjA;

    /*Algoritma*/
    printf("Program Tunjangan Anak\n");
    printf("Masukan jumlah anak = \n");
    scanf("%d", &A);
    printf("Masukan gaji pokok = \n");
    scanf("%d", &G);
    if(A<0 || G<=0){
       printf("Masukan jumlah anak>=0 dan gaji>0 \n");
    }
    else{
        if(A<=3){
            tunjA=A*10*G/100;
            printf("Tunjangan Anak adalah %d \n", tunjA);
        }
        else{
            tunjA=3*10*G/100;
            printf("Tunjangan Anak adalah %d \n", tunjA);
        }
    }
return 0;
}

