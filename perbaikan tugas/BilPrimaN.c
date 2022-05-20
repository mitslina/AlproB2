/*Nama File   :BilPrimaN.c*/
/*Deskripsi 	:mencetak bilangan Prima sampai dengan bilangan integer sembarang N*/
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl Pembuatan: Jumat, 01 April 2022 pukul 18.30*/

#include<stdio.h>

int main() {
/*kamus*/
	int i, j, c;
	int N;

/*Algoritma*/
	printf("Program Cetak Bilangan Prima sampai N \n");
	printf("Masukan nilai N = ");
	scanf("%d", &N);

	if (N<2){
		printf("Masukan N>1");
	}	
	else{
		printf("bilangan primanya adalah ");
		for(c=2; c<=N; c++){	/*bilangan sebarang*/
			j=0;
			for(i=1; i<=c; i++){ /*mencari faktor bilangan untuk menentukan prima*/
				if(c%i==0){	
					j++;	/*banyaknya faktor*/
				}				
			}
			if (j==2){
				printf("%d, ", c);
			}
		}
	}
	return 0;
}
