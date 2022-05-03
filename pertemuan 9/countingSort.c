/* Nama file	: countingSort.c */
/* Deskripsi 	: program sorting dengan counting sort */
/* Nama-Nim  : Mitslina-24060121130068 */
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
/* COUNTING SORTING */
int main()
{
/* counting sorting : membuat arrayN tambahan dengan elemen 1~N.
menghitung banyaknya elemen yang sama (pada array utama) lalu ditempatkan pada arrayN tambahan.
kemudian diurutkan dari elemen arrayN tambahan pertama hingga banyaknya elemen didalamnya menjadi 0.
diteruskan pada elemen arrayN tambahan kedua, dan seterusnya. */
/* kamus global */
	int i, j, c;
	boolean count;
	int size=12;
	int arr[12]={6, 2, 8, 1, 2, 2, 2, 6, 2, 2, 1, 1};
	int max=8;
	int sum[8];
	
/* algoritma */
	printf("=====program counting sort=====");
	
	/* memastikan nilai elemen array>0 */
	if(arr[size]<0){
		printf("\nnilai elemen array harus lebih dari 0\n");
	}
	else{
		/* siapkan array sum untuk menampung banyaknya angka */
		for(i=0; i<max; i++){
			sum[i]=0;
		}
		/* tampilkan nilai awal array */
		printf("\nnilai awal array arr dan array sum: \n");
		printf("arr: ");
		for(c=0; c<size; c++){
			printf("%d ", arr[c]);
		}
		printf(" \n");
		printf("sum: ");
		for(c=0; c<max; c++){
			printf("%d ", sum[c]);
		}
		printf(" \n");
		
		/* counting hitung banyaknya angka */
		for(j=0; j<size; j++){
			count=false; /* set false sebelum perhitungan banyaknya nilai */
			for(i=1; i<=max && count==false; i++){
				if(arr[j]==i){
					sum[i-1]=sum[i-1]+1;
					arr[j]=0;
					count=true;
				}
			} /* end i */
			
			/* tampilkan tiap langkah counting */
			printf("\nhasil counting angka %d: \n", i-1);
			printf("arr: ");
			for(c=0; c<size; c++){
				printf("%d ", arr[c]);
			} /* end c */
			printf(" \n");
			printf("sum: ");
			for(c=0; c<max; c++){
				printf("%d ", sum[c]);
			} /* end c */
			printf(" \n");
		} /* end j */
	
		/* sorting urutkan array */
		i=0; /* inisialisasi counter array arr */
		/* cek pada array sum */
		for(j=1; j<=max; j++){/* adakah angka j */
			if (sum[j-1]!=0){ /* cek banyaknya angka, jika sum=0 maka tdk ada angka j */
			/* looping array arr */
				i=i;
				while(sum[j-1]!=0){
					arr[i]=j;
					sum[j-1]=sum[j-1]-1; 
				
					/* tampilkan tiap langkah sorting */
					printf("\nHASIL SORTING ANGKA %d: \n", j);
					printf("arr: ");
					for(c=0; c<size; c++){
						printf("%d ", arr[c]);
					} /* end c */
					printf(" \n");
					printf("sum: ");
					for(c=0; c<max; c++){
						printf("%d ", sum[c]);
					} /* end c */
					printf(" \n");
				
				i++;
				} /* end while */
			}
			/* tampilkan angka yang sudah dicek */
			printf("angka %d sudah dicek\n", j);
		} /* end j */
		
		/* tampilkan hasil akhir */
		printf("\n=====hasil akhir counting sort=====\n");
		printf("arr : ");
		for(c=0; c<size; c++){
			printf("%d ", arr[c]);
		} /* end c */
		printf("\n");
		}
	return 0;
}