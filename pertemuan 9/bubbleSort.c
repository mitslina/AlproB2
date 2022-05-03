/* Nama file	: bubbleSort.c */
/* Deskripsi 	: program sorting dengan bubble  */
/* Nama-Nim  	: Mitslina-24060121130068 */
/* Tgl Pembuatan : Senin, 2 Mei 2022 */

#include<stdio.h>
/* deklarasi sub program */

/* sub program */
/* BOOLEAN */
/* kamus lokal */ 
	#ifndef boolean_h
	#define true 1
	#define false 0
	#define boolean unsigned char
	#endif

/* program utama */
/* BUBBLE SORTING */
int main()
{
/* bubble sorting : sorting dengan membandingkan tiap dua elemen. 
Apabila nilai elemen kiri>elemen kanan, kedua elemen tersebut akan bertukar posisi. */

/* kamus global */
	int i, c;
	int size=12;
	int arr[12]={6, 2, 8, 1, 2, 2, 2, 6, 2, 2, 1, 1};
	int size_hitung;
	int temp;
	boolean swapped;
	
/* algoritma */
	printf("=====program bubble sort=====");
	printf("\narray awal : ");
	for(c=0; c<size; c++){
		printf("%d ", arr[c]);
	} /* end c */
	printf("\n");
		
	size_hitung=size;
	swapped=true;	/* inisialisasi awal syarat masuk ke while looping */
	while(swapped==true){	/* cek apa semua elmt sudah urut */
		swapped=false;	/* set false sebelum adanya penukaran */
		for(i=1; i<size; i++){	/* membandingkan tiap 2 elmt array untuk menentukan pertukaran */
			if (arr[i-1]>arr[i]){
				/* tukar elemen */
				temp = arr[i-1];
				arr[i-1] = arr[i];
				arr[i] = temp;
				/* tanda melakukan swap */
				swapped=true;
			}
		
			/* tampilkan tiap langkah membandingkan */
			printf("hasil membandingkan angka %d dan %d: ", arr[i-1], arr[i]);
			for(c=0; c<size_hitung; c++){
				printf("%d ", arr[c]);
			} /* end c */
			printf(" \n");
			
		}/* end i */
		printf("\n");
		
		/* elmt indeks terakhir sudah urut (lebih besar) */
		size=size-1;	/* batas counter indeks */
	} /* end while */
		
	/* tampilkan hasil akhir */
	printf("\n=====hasil akhir bubble sort=====\n");
	printf("arr : ");
	for(c=0; c<size_hitung; c++){
		printf("%d ", arr[c]);
	} /* end c */
	printf("\n");
	return 0;
}
