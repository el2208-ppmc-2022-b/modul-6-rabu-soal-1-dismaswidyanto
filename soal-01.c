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

void create_linked_list(Node** head, char* basa){
	Node* dum = (Node*)malloc(sizeof(Node));
	Node* dum2 = NULL;
	dum->basa = basa[0];
	*head=dum;

	for(int i=1; basa[i]!=0; i++){
		dum2 = (Node*)malloc(sizeof(Node));
		dum->next = dum2;
		dum=dum2;
		dum->basa = basa[i];
	}
	dum2->next=NULL;	
}

void create_linked_list_dum(Node** head, Node** tail, char* basa){
	Node* dum = (Node*)malloc(sizeof(Node));
	Node* dum2 = NULL;
	dum->basa = basa[0];
	*head=dum;

	for(int i=1; basa[i]!=0; i++){
		dum2 = (Node*)malloc(sizeof(Node));
		dum->next = dum2;
		dum=dum2;
		dum->basa = basa[i];
	}
	*tail=dum2;
	dum2->next=NULL;	
}

void insertion(Node** head1, Node** head2, Node** tail2, int n){
	int i=0;
	Node* dum=NULL;
	dum=*head1;
	for(i=0; i<(n-1); i++){
		dum=dum->next;
	}
	if(n>0){
		(*tail2)->next=dum->next;
		dum->next=*head2;
	}
	else{
		*head1=*head2;
		(*tail2)->next=dum;
	}
	
}

void deletion(Node** head, int n, int m){
	int i=0;
	Node* dum1=*head;
	Node* dum=NULL;
	for(i=0; i<(n-1); i++){
		dum1=dum1->next;
	}
	dum=dum1;
	for(i=0 ;i<(m-n); i++){
		dum1=dum1->next;
	}
	if(n>0){	
		dum->next=dum1->next;
	}
	else{
		*head=dum1;
	}
}

int main(){
	int n,m=0;
	char basa_utama[256];
	Node* head_basa_utama = NULL;
	char basa_dum[33];
	Node* head_basa_dum = NULL;
	Node* tail_basa_dum = NULL;
	int menu=0;

	printf("Masukkan urutan basa yang akan diedit: ");
	scanf("%s", &basa_utama);
	create_linked_list(&head_basa_utama, basa_utama);
	printf("Pilih operasi 1.insertion 2.deletion 3.exit: ");
	scanf("%d", &menu);

	while(menu!=3){
		if(menu==1){
			printf("Masukkan urutan basa yang akan di insert: ");
			scanf("%s", &basa_dum);
			create_linked_list_dum(&head_basa_dum, &tail_basa_dum, basa_dum);
			printf("Setelah urutan basa ke- berapa akan di insert urutan basa baru: ");
			scanf("%d", &n);
			insertion(&head_basa_utama, &head_basa_dum, &tail_basa_dum, n);
		}
		else if(menu==2){
			printf("Urutan basa dari setelah berapa sampai berapa yang akan di delete: ");
			scanf("%d %d", &n, &m);
			deletion(&head_basa_utama, n, m);
		}

		printf("Pilih operasi 1.insertion 2.deletion 3.exit: ");
		scanf("%d", &menu);
	}

	printf("Hasil edit urutan basa nitrogen: ");
	Node* temp=head_basa_utama;
	while(temp->next != NULL){
		printf("%c", temp->basa);
		temp=temp->next;
	}printf("%c", temp->basa);

	return 0;
}
