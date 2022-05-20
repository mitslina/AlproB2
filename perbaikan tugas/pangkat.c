/*Nama File  :pangkat .c*/
/*Deskripsi	:Memberikan nilai hasil pemangkatan dua bilangan integer sembarang i dan j*/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan:Jumat, 01 April 2022 pukul 20.45*/

#include<stdio.h>

/*Deklarasi SubProgram*/
float faktorial(int i, j);

/*SubProgram Pangkat*/
/*Memberikan nilai hasil pemangkatan dua bilangan integer sembarang i dan j*/
float pangkat(int i, j){
	
/*Kamus lokal*/
	float sum;
	int c;
	
/*Algoritma*/
	sum = 1;
	if(j==0){
		return 0;
	}
	else{
		if(j>0){
			for(c=1; c<=j; c++){
				sum = sum*i;
			}
		}
		else{
			for(c=1; c<=-j; c++){
				sum = sum*1/i;
			}		
		}
		return sum;
	}	
}
/*===============================*/
/*Program Utama*/
int main(){
/*Kamus global*/
	int i, j;
	
/*Algoritma*/
	printf("Menghitung Pangkat \n");
	printf("Masukan bilangan : ");
	scanf("%d", &i);
	printf("Masukan pangkat : ");
	scanf("%d", &j);
	printf("Pangkat(%d, %d) = %f", i, j, pangkat(i,j));
	return 0;
}