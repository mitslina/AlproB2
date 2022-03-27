/*Nama File     :CekSempurna.c*/
/*Deskripsi     :Mengecek suatu bilangan integer sembarang adalah bilangan sempurna. Bilangan sempurna adalah sebuah bilangan yang jumlah faktor-faktor bilangannyakecuali faktor bilangan itu sendiri nilainya sebesar bilangan itu sendiri.*/
/*Pembuat       :Mitslina-24060121130068*/
/*Tgl Pembuatan :Sabtu, 26 Maret 2022*/

#include<stdio.h>

int main()
{
	/*kamus*/
	int i, j;
	int N;

	/*Algoritma*/
	printf("Program Bilangan Sempurna\n");
	printf("Masukan nilai N= \n");
	scanf("%d", &N);
	if (N<=0){
		printf("N harus positif");
	}
	else{
		j=0;
		for(i=1;i<N;i++){
			if(N%i==0){
				j+=i; /*Penjumlahan bilangan*/
			}
		}
		if (j==N){
            printf("%d adalah bilangan sempurna", N);
        }
        else{
            printf("%d Bukan bilangan sempurna", N);
        }
	}
return 0;
}
