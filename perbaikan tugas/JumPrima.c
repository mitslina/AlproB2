/*Nama File   :JumPrima.c*/
/*Deskripsi 	:menghitung dan mencetak bilangan Prima sampai dengan bilangan integer sembarang N beserta hasil penjumlahannya*/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan:Jumat, 01 April 2022 pukul 19.20*/

#include<stdio.h>

int main() {
/*kamus*/
	int i, j, c;
	int N;
	int sum;

/*Algoritma*/
	printf("Program Cetak Bilangan Prima sampai N \n");
	printf("Masukan nilai N = ");
	scanf("%d", &N);
	
	if (N<2){
			printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0");
	}	
	else{
		sum=0;	
		for(c=2; c<=N; c++){	/*bilangan sebarang*/
			j=0;
			for(i=1; i<=c; i++){ /*mencari faktor bilangan untuk menentukan prima*/
				if(c%i==0){	
					j++;	/*banyaknya faktor*/
				}				
			}
			if (j==2){
				printf("%d + ", c);
				sum=sum+c;
			}
		}
		printf("Jumlahan Deret Bilangannya adalah %d", sum);
	}
	return 0;
}
