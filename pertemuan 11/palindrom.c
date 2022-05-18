/*Nama File 	: palindrom.c*/
/*Deskripsi 	: Mesin abstrak untuk memeriksa apakah
                  kata itu akan sama jika dibaca dari kiri ke kanan atau kanan ke kiri(palindrom)*/
/*Pembuat   	: 24060121130068-Mitslina*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

main(){
/*Kamus*/
    int Panjang_Pita;
    int i;
    char Pita[50];
    int Palindrom;

/*Algoritma*/
    Panjang_Pita = HitungChar();
    printf("===Mesin Hitung Kata===\n");

    /* ganti isi pita dengan mengubah isi di file pitakar.txt */
    if (Panjang_Pita >= 100){
       printf("karakter dalam pita maksimal 100 termasuk titik");
    }
    else{
        /* proses pembacaan pita */
        START();
        i = 0;
        while(!EOP()){
            Pita[i] = CC;
            ADV();
            i++;
        }

        /* tampilan hasil pembacaan pita */
        printf("Pita dibaca : ");
        for (int i = 0; i < Panjang_Pita; i++){
            printf("%c", Pita[i]);
        }

        /* cek palindrom pita */
        Palindrom=0; /* inisialisasi awal pita belum ditemukan palindrom krn blm dicek */
        for(i=0; i<Panjang_Pita; i++){
            if(Pita[i]!=Pita[Panjang_Pita-i-1]){
                Palindrom = 1; /* jika huruf yang dibandingkan tidak sama, akan memberikan nilai 1 pada varbl palindrom */
            }
        }
        printf("\nIsPalindrom : ");
        if(Palindrom==1){ /* jika setelah pengecekan palindrom pita, varbl palindrom = 1 */
            printf("false");/* maka bukan palindrom */
        }
        else{
            printf("true");
        }

    }

    getch();
    return 0;
}
