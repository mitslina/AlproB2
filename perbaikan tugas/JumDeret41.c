/*Nama file	: JumDeret41.c*/
/*Deskripsi	: Menghitung deret bilangan 1, 3, 6, 10, 15, 21, …, ½ n (n + 1 ) serta menampilkan deret bilangan dan jumlah deret yang dapat dibentuk sebanyak N, N>0.*/
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl Pembuatan : Jumat, 01 April 2022 pukul 17.30*/

#include<stdio.h>

int main(){
/*Kamus*/
	int N, j, i, sum;
	int elmt[20];
/*Algoritma*/	
	printf("Program Jumlah Deret 41 \n");
	printf("Masukan jumlah deret : ");
	scanf("%d", &N);	

	sum=0;
	for(i=1; i<=N; i++){
		elmt[i-1] = i*(i+1)/2;
		sum = sum + elmt[i-1];
		printf("%d, ", elmt[i-1]);
	}
	printf("dengan Sn : %d", sum);
	return 0;
}