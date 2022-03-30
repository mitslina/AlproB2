/*Nama file	:Tetris2.c*/
/*Deskripsi	:Menampilkan susunan karakter '*' dengan tinggi sesuai inputan integer N>0 */
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl pembuatan	:Senin, 28 Maret 2022*/

/* (Catatan deret Un=1/2*n*(n+1))
Banyaknya N =5
* --1
*** --3
****** --6
********** --10
*************** --15			*/

#include <stdio.h>

int main(){
	/*Kamus*/
		int N, i, j;
		int U;

	/*Algoritma*/
		printf("Program menampilkan tetris 2 \n");
		printf("Masukan tinggi N: \n");
		scanf("%d", &N);
		if(N<=0){
			printf("Masukan harus positif");
		}
		else{
			for(i=1; i<=N; i++){	/*cetak tinggi tetris*/
				U=i*(i+1)/2;
				for(j=1; j<=U; j++){	/*cetak banyak karakter '*' */
					printf("*");
				}
				printf(" --%d \n", U);
			}
		}
	return 0;
}
