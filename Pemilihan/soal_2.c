/*
2.	Sebuah proyek dikerjakan selama x hari. Tulislah dalam notasi algoritma untuk mengkonversi berapa tahun, berapa bulan dan berapa hari proyek tersebut dikerjakan. Asumsikan 1 tahun = 365 hari, 1 bulan = 30 hari. Contoh: INPUT: jumlah hari = 400
OUTPUT: 1 tahun, 1 bulan, 5 hari
*/

#include <stdio.h>

int main(){
    //deklarasi variable
    int x;
    int tahun, bulan, hari, sisa_hari;

    printf("Masukan nilai x: ");
    scanf("%d",&x);

    tahun = x / 365;
    sisa_hari = x % 365;
    bulan = sisa_hari / 30;
    hari = sisa_hari % 30;
    printf("%d tahun, %d bulan, %d hari ", tahun, bulan, hari);
    return 0;
}