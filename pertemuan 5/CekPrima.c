/*Nama File     :CekPrima.c*/
/*Deskripsi     :Mengecek suatu bilangan integer sembarang merupakan bilangan prima. Bilangan prima adalah sebuah bilangan yang memiliki 2 faktor bilangan, yaitu 1 dan dirinya sendiri.*/
/*Pembuat       :Mitslina-24060121130068*/
/*Tgl Pembuatan :Sabtu, 26 Maret 2022*/

#include<stdio.h>
int main()
{
	/*kamus*/
	int i, j;
	int N;

	/*Algoritma*/
	printf("Program Bilangan Prima\n");
	printf("Masukan nilai N= \n");
	scanf("%d", &N);
	if (N<=0){
		printf("N harus positif");
	}
	else{
		j=0;
		i=1;
		do{
			if(N%i==0){
				j++; /*Cek jumlah faktor*/
			}
			i++;
		}while(i<=N);
		if (j==2){
            printf("%d adalah bilangan prima", N);
        }
        else{
            printf("%d bukan bilangan prima", N);
        }
	}
return 0;
}
