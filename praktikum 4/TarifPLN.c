/*Nama File     :TarifPLN.c*/
/*Deskripsi     :Menghitung tarif PLN berdasarkan golongan tarif dan pemakaian daya listrik*/
/*Pembuat       :Mitslina-24060121130068*/
/*Tgl Pembuatan :Kamis, 17 Maret 2022*/

#include<stdio.h>

int main(){
    /*Kamus*/
    int daya, gol;
    int tarif;

    /*Algoritma*/
    printf("Program Tarif PLN\n");
    printf("Masukan daya kWH = \n");
    scanf("%d", &daya);
    printf("Masukan golongan = \n");
    scanf("%d", &gol);
    if(daya<100||gol<=0||gol>2){
        printf("Masukan input daya>100 0<golongan<3 \n");
    }
    else{
        if(daya>=1000){
            if(gol==1){
                tarif=daya*1000+(daya*1000*10/100);
                printf("Tarif PLN adalah %d \n", tarif);
            }
            else{
                tarif=daya*2000+(daya*2000*10/100);
                printf("Tarif PLN adalah %d \n", tarif);
            }
        }
        else{
            if(gol==1){
                tarif=daya*1000;
                printf("Tarif PLN adalah %d \n", tarif);
            }
            else{
                tarif=daya*2000;
                printf("Tarif PLN adalah %d \n", tarif);
            }
        }
    }
return 0;
}
