/*Nama File 	: hitungKata.c*/
/*Deskripsi 	: Mesin abstrak untuk menghitung kata */
/*Pembuat   	: 24060121130068-Mitslina*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/
/*Definisi: Kata adalah pasangan
    C1, C2, dengan C1=sembarang huruf, dan C2=' ' atau
    C1, C2, dengan C1sembarang huruf, dan C2='.'
*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

main(){
/*Kamus*/
    int Panjang_Pita;
    char Pita[100];
    int i;
    int Jumlah_Kata;

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

        /* hitung kata */
        i=0;
        Jumlah_Kata=1;
        while(Pita[i]!='\0'){ /* pita belum Null (habis) */
            if(Pita[i] == ' ' || Pita[i] == '\n' || Pita[i] == '\t'){ /* cek kesesuaian definisi kata (spasi, enter, tab) */
                Jumlah_Kata++;
            }
            i++;
        }
        printf("\nJumlah kata : %d\n", Jumlah_Kata);
    }

    getch();
    return 0;
}
