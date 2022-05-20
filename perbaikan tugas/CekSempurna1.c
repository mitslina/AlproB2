/*Nama File   :CekSempurna1.c*/
/*Deskripsi 	:Mengecek suatu bilangan integer sembarang adalah bilangan sempurna. Bilangan sempurna adalah sebuah bilangan yang jumlah faktor-faktor bilangannya 
ecuali faktor bilangan itu sendiri nilainya sebesar bilangan itu sendiri.*/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan: Sabtu, 02 April 2022 pukul 18.45*/

#include<stdio.h>

int main() {
/*kamus*/
	int i, j;
	int N;

/*Algoritma*/
	printf("Program Bilangan Sempurna\n");
	printf("Masukan nilai N = ");
	scanf("%d", &N);
	if (N<=0){
		printf("N harus positif");
	}
	else{
		j=0;
		for(i=1; i<N; i++){
			if(N%i==0){
				j+=i;
			}
		}
		if (j==N){
            printf("%d Bilangan Sempurna", N);
        }
        else{
            printf("%d Bukan Bilangan Sempurna", N);
        }
	}
return 0;
}
