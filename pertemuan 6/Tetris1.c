/*Nama file	:Tetris1.c*/
/*Deskripsi	: Menampilkan susunan karakter '*' dengan tinggi sesuai inputan integer N>0 */
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl pembuatan	:Senin, 28 Maret 2022*/

/*Susunan tetris jika N = 5,
maka dilayar akan ditampilkan:
***** --5
**** --4
*** --3
** --2
* --1			            */

#include <stdio.h>

int main(){
	/*Kamus*/
		int N, i, j;

	/*Algoritma*/
		printf("Program menampilkan tetris 1 \n");
		printf("Masukan tinggi N: \n");
		scanf("%d", &N);
		if(N<=0){
			printf("Masukan harus positif");
		}
		else{
			for(i=N; i>0; i--){	/*cetak tinggi tetris*/
				for(j=1; j<=i; j++){	/*cetak banyak karakter '*' */
					printf("*");
				}
				printf(" --%d \n", i);
			}
		}
	return 0;
}
