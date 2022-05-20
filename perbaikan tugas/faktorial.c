/*Nama File   :faktorial.c*/
/*Deskripsi 	:Menghitung nilai Faktorial dari sebuah bilangan integer N sembarang*'/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan:Jumat, 01 April 2022 pukul 21.00*/

#include<stdio.h>

/*Deklarasi SubProgram*/
int faktorial(int a);

/*SubProgram Faktorial*/
/*Menghitung nilai Faktorial dari sebuah bilangan integer N sembarang*/
int faktorial(int a){ /*Menghitung faktorial*/
/*Kamus lokal*/
	int i;
	int hasil;
	
/*Algoritma*/
	hasil=1;
	i=a;
	while(i>0){
		hasil = hasil*i;
	i--;
	}
	return hasil;
}

/*===============================*/
/*Program Utama*/
int main(){
/*Kamus global*/
	int N;
	
/*Algoritma*/
	printf("Menghitung bilangan faktorial\n");	printf("Masukan bilangan faktorial : ");
	scanf("%d", &N);
	printf("Faktorial(%d) = %d", N, faktorial(N));
	return 0;
}