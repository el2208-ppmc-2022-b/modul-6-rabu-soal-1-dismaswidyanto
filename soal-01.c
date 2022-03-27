/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 6 - Linked List
*Percobaan        : -
*Hari dan Tanggal : Rabu, 30 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	char basa;
	struct Node* next;
}Node;

int main(){
	char basa_utama[256];
	char basa_dum[33];

	printf("Masukkan urutan basa yang akan diedit: ");
	scanf("%s", &basa_utama);

	printf("Pilih operasi 1.insertion 2.deletion 3.exit: ");
	scanf("%d", ...);

	printf("Masukkan urutan basa yang akan di insert: ");
	scanf("%s", &basa_dum);
	printf("Setelah urutan basa ke- berapa akan di insert urutan basa baru: ");
	scanf("%d", ...);

	printf("Urutan basa dari setelah berapa sampai berapa yang akan di delete: ");
	scanf("%d %d", ..., ...);

	printf("Hasil edit urutan basa nitrogen: ");
	...printf("%c", ...);

	return 0;
}