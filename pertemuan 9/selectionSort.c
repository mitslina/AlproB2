/* Nama file	: selectionSort.c */
/* Deskripsi 	: program sorting dengan selection sort */
/* Nama-Nim  	: Mitslina-24060121130068 */
/* Tgl Pembuatan : Senin, 2 Mei 2022 */

#include<stdio.h>

/* program utama */
/* SELECTION SORTING */
int main()
{
/* selection sorting : sorting dengan membandingkan tiap elemen yang belum disorting untuk menemukan elemen terkecil. 
Kemudian ditempatkan pada indeks awal (indeks sebelum proses scan) */

/* kamus */
	int i, j, c;
	int size=12;
	int arr[12]={6, 2, 8, 1, 2, 2, 2, 6, 2, 2, 1, 1};
	int pivot;	/* elemen pembanding */
	int temp, dswap;	/* penampung */
	
/* algoritma */
	printf("=====program selection sort=====");
	printf("\narray awal : ");
	for(c=0; c<size; c++){
		printf("%d ", arr[c]);
	}
	printf("\n");
	
	/* selection sort */
	for(j=0; j<size-1; j++){   /* indeks yang akan ditentukan nilainya */
		pivot=arr[j];	/* inisialisasi elemen pembanding */
		for(i=j; i<size; i++){	/* mencari elemen array yang terkecil */
			if(arr[i+1]<pivot){	
				pivot=arr[i+1];
				dswap=i+1;
			
				/* tampilkan seleksi elemen */
				printf("selection elemen %d dari indeks %d: \n", pivot, dswap);
				for(c=0; c<size; c++){
					printf("%d ", arr[c]);
				}
				printf("\n");
			}			
		} /* end i */
		
		/* tukar nilai arr[j] pada indeks j dengan nilai pivot yang berada pada indeks dswap  */
		temp = arr[j];
		arr[j] = arr[dswap];
		arr[dswap] = temp;
		
		/* tampilkan array sementara */
		printf("swap elemen %d dari indeks %d ke indeks %d: \n", pivot, dswap, j);
		for(c=0; c<size; c++){
			printf("%d ", arr[c]);
		} /* end c */
		printf("\n\n");
		
	} /* end j */
	
	/* tampilkan hasil akhir */
	printf("\n=====hasil akhir selection sort=====\n");
	for(c=0; c<size; c++){
		printf("%d ", arr[c]);
	}
	printf("\n");
	return 0;
}
