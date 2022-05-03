/* Nama file	: insertSort.c */
/* Deskripsi 	: program sorting dengan insert sort */
/* Nama-Nim  : Mitslina-24060121130068 */
/* Tgl Pembuatan : Senin, 2 Mei 2022 */

#include<stdio.h>

/* INSERT SORTING */
int main()
{
/* insert sorting : sorting dengan membandingkan suatu elemen dengan elemen sebelumnya.
akan disisipkan jika elemen tersebut lebih besar dari elemen sebelumnya */
/* kamus lokal */
	int i, j, c;
	int size=12;
	int arr[12]={6, 2, 8, 1, 2, 2, 2, 6, 2, 2, 1, 1};
	int temp;

/* algoritma */
	printf("=====program insert sorting=====");
	printf("\narray awal : ");
	for(c=0; c<size; c++){
		printf("%d ", arr[c]);
	}
	printf("\n");
	
	for(i=1; i<size; i++){ /* menentukan indeks yang menjadi proses awal */
		for(j=i; j>0 && arr[j]<arr[j-1] ; j--){ /* menentukan swap */
		/* tukar elemen */
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
				
		/* tampilkan sort sementara */
			printf("i:%d swap angka %d dari indeks %d:  ", i, arr[j-1], j);
			for(c=0; c<size; c++){
				printf("%d ", arr[c]);
			} /* end c */
			printf("\n");
		} /* end i */
		printf("\n");
	} /* end j */
	
	/* tampilkan hasil akhir */
	printf("\n=====hasil akhir insert sort=====\n");
	for(c=0; c<size; c++){
		printf("%d ", arr[c]);
	}
	printf("\n");
	return 0;
}