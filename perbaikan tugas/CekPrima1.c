/*Nama File   :CekPrima1.c*/
/*Deskripsi 	:Mengecek suatu bilangan integer sembarang merupakan bilangan prima. Bilangan prima adalah sebuah bilangan yang memiliki 2 faktor bilangan, yaitu 1 dan dirinya sendiri.*/
/*Pembuat     :Mitslina-24060121130068*/
/*Tgl Pembuatan:Jumat, 01 April 2022 pukul 18.45*/

#include<stdio.h>

int main(){
/*kamus*/
	int i, j;
	int N;

/*Algoritma*/
	printf("Program Bilangan Prima\n");
	printf("Masukan nilai N= ");
	scanf("%d", &N);
	if (N<=0){
		printf("N harus positif");
	}
	else{
		j=0;
		i=1;
		do{
			if(N%i==0){
				j=1+j;
			}
			i++;
		}while(i<=N);
		if (j==2){
            printf("%d Bilangan Prima", N);
        }
        else{
            printf("%d Bukan Bilangan Prima", N);
        }
	}
	return 0;
}
