/*Nama File :SiputNaik.c*/
/*Deskripsi :Menghitung jumlah hari siput naik pada N meter lubang (inputan N>0) jika pada pagi hari siput naik 0.3 meter dan setiap malam hari siput mengalami penurunan 0.1 meter*/
/*Pembuat  :Mitslina-24060121130068*/
/*Tgl Pembuatan: Sabtu, 26 Maret 2022*/

#include<stdio.h>

int main(){
	/*Kamus*/
	float N;
	float jum;
	int i;

	/*Algoritma*/
	printf("Program Menghitung Hari Siput Sampai di Permukaan Lubang  \n");
	printf("Masukan kedalaman lubang N dalam meter = \n");
	scanf("%f", &N);
	if (N<=0){
		printf("Masukan harus positif");
	}
	else{
		jum=0;
		i=1;
		do{
			if(jum+0.3>=N-0.01){ /*berhasil sampai N selama sehari*/
				printf("Siput membutuhkan %d hari untuk sampai di permukaan", i);
				jum=N;
			}
			else{ /*Kondisi Naik selama sehari semalam*/
				jum=jum+0.2;
			}
		i++;
		}while(jum<N);
	} 
return 0;
}
