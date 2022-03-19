/*Nama File     :FaktorBil.c*/
/*Deskripsi     :Menentukan faktor dari suatu bilangan sembarang*/
/*Pembuat       :Mitslina-24060121130068*/
/*Tgl Pembuatan :Kamis, 17 Maret 2022*/

#include<stdio.h>

int main(){
    /*Kamus*/
    int N, i;

    /*Algoritma*/
    printf("Program Faktor Bilangan\n");
    printf("Masukan bilangan sembarang = \n");
    scanf("%d", &N);
    if(N<=0){
        printf("N harus positif \n");
    }
    else{
        i=1;
        do{
            if(N%i==0){
                printf("|%d", i);
            }
            i++;
        }while(i<=N);
    }
return 0;
}
