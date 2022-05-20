/*Nama File	:KelBil.c*/
/*Deskripsi	: menentukan kelipatan bilangan terkecil, 
jika diberikan sebuah array integer A sebarang.*/
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl Pembuatan : Rabu, 30 Maret 2022 pukul 20.30*/

#include<stdio.h>

int main(){
/*Kamus*/
	int N; 	/*banyak bilangan*/
	int i; 	/*counter*/
	int A[5]; 	/*array berukuran 5*/
	int x,y;	/*penginisialisasi*/
		
/*Algoritma*/
	printf("Program Kelipatan Bilangan Terkecil");
	/*input jumlah indeks array*/
		printf("\nMasukan banyak bilangan : \n");
		scanf("%d", &N);
	/*input elemen array*/
		i=0;
		while(i<N){
			printf("A[%d] : ", i);
			scanf("%d", &A[i]);
		i++;
		}	
	/*Menghitung KPK*/
		i=0;
		while(i<N-1){
			x=A[i]; y=A[i+1];
			while(A[i]!=A[i+1]){
				while(A[i]<A[i+1]){
					A[i]=A[i]+x;
				}
				while(A[i]>A[i+1]){
					A[i+1]=A[i+1]+y;
				}
			}
		i++;
		}
	printf("KPK dari %d bilangan adalah %d",N,A[N-1]);
	return 0;
}
