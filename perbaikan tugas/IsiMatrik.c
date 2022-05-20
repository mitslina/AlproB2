/*Nama File	:IsiMatriks.c*/
/*Deskripsi	: Mengisi matrik ordo sama  (Nbar x Mkol) dengan aturan bahwa nilai 1 diisikan pada elemen-
elemen diagonal utama, nilai 0 diisikan pada elemen-elemen di atas diagonal utama, dan nilai 2
diisikan pada elemen-elemen di bawah diagonal utama.*/
/*Pembuat	:Mitslina-24060121130068*/
/*Tgl Pembuatan : Rabu, 30 Maret 2022 pukul 22.30*/
'
#include<stdio.h>

int main(){
/*Kamus*/
	int Nbar; 	/*jumlah baris*/
	int Mkol;	/*jumlah kolom*/
	int i; 	/*indeks baris*/
	int j;	/*indeks kolom*/
	int arr[100][100]; 	/*array berukuran 100 baris dan 100 kolom*/
		
/*Algoritma*/
	printf("Program Isi Matrik");
	/*input jumlah indeks array*/
		printf("\nMasukan banyak baris : \n");
		scanf("%d", &Mkol);
		printf("\nMasukan banyak kolom : \n");		scanf("%d", &Nbar);
		if(Mkol!=Nbar){
			printf("Nilai M dan N harus sama");
		}
		else {
			if(Mkol<=0 && Nbar<=0){
				printf("nilai M dan N harus positif");
			}
			else{ /*cetak matrik per baris*/
				for(i=0; i<Nbar; i++){ 
					for(j=0; j<Mkol; j++){
						if(i==j){
							arr[i][j]=1;
						}
						else{
							if(i<j){
								arr[i][j]=0;
							}
							else{
								arr[i][j]=2;
							}
						}
					printf("%d  ", arr[i][j]);
					}
				printf("\n");
				}
			}
		}
	return 0;
}