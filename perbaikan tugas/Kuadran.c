/*Nama File	:Kuadran.c*/
/*Deskripsi	: Mengecek keberadaan suatu titik pada kuadran*/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan:Jumat, 01 April 2022 pukul 19.45*/

#include<stdio.h>

int main(){
/*Kamus*/
	int i; 	/*counter*/
	int x,y;	 /*Masukan*/
		
/*Algoritma*/
	printf("Program Kelipatan Bilangan Terkecil");
	printf("\nMasukan sumbu x : ");
	scanf("%d", &x);
	printf("Masukan sumbu y : ");
	scanf("%d", &y);
	if(x==0 || y==0){
		printf("Masukan tidak boleh nol");
	}
	else{
		if(x>0){
			if(y>0){
				printf("kuadran I");
			}
			else{	/*y < 0*/
				printf("kuadran IV");
			}
		}
		else{ 	/*x < 0*/
			if(y>0){
				printf("kuadran III");		
			}
			else{ 	/*y < 0*/
				printf("kuadran II");
			}
		}
	}
	return 0;
}