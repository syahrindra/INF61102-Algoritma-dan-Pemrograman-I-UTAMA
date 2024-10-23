/*
3.	Buat algoritma yang menampilkan menu secara berulang-ulang:
1)	Baca data
2)	Cetak data
3)	Ubah data
4)	Hapus data
5)	Keluar program
Kemudian menerima masukan pilihan menu dari user, dan berhenti saat user
memilih no.5 yaitu keluar dari program.
*/

#include <stdio.h>

int main(){
    int pilihan_menu;
    do{
        printf("Menu");
        printf("\n1) Baca Data");
        printf("\n2) Cetak Data");
        printf("\n3) Ubah Data");
        printf("\n4) Hapus Data");
        printf("\n5) Keluar Program");
        printf("\nPilihan Menu: ");
        scanf("%d",&pilihan_menu);

    }while(pilihan_menu != 5);
    return 0;
}