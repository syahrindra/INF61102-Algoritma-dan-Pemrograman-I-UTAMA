/*
Hitunglah total nilai dari nilai-nilai yang dimasukkan melalui alat input. 
Apabila nilai yang dimasukkan adalah nol maka proses perhitungan dan pemasukkan nilai berakhir. 
Buat algoritma untuk menghitung total nilai tersebut !*/

#include <stdio.h>

int main(){
    int nilai, total = 0;
    do {
        printf("Masukan nilai: ");
        scanf("%d",&nilai);
        total += nilai;
    }
    while (nilai != 0);

    printf("Totalnya adalah: %d", total);
    return 0;
}