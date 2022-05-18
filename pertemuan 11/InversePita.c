/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: 24060121130068-Mitslina*/
/*Tgl Pembuatan	: Rabu, 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int Panjang_Pita;
    char Pita[50];
    int i;

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

        /* inverse tampilan pita */
        printf("\nPita inverse : ");
        for (int i = Panjang_Pita-1; i >= 0; i--)
        {
            printf("%c", Pita[i]);
        }

    }

    getch();
    return 0;
}
