/*7.	Buatlah algoritma untuk menentukan tunjangan pegawai dilihat dari lama bekerjanya. Jika pegawai telah bekerja selama lebih dari 5 tahun, maka besar tunjangan yang di dapatkan adalah 1x gaji pokoknya. Jika, lama bekerja belum mencapai 5 tahun, tidak mendapat tunjangan. Contoh:
INPUT: lama bekerja = 6, gaji pokok = 5.000.000 
OUTPUT: tunjangan yang didapatkan = 5.000.000*/

#include <stdio.h>

int main(){
    int gaji_pokok = 5000000, lama_bekerja, tunjangan;

    //input
    printf("Masukan lama bekerja: ");
    scanf("%d",&lama_bekerja);

    //proses
    if(lama_bekerja > 5){
        tunjangan = gaji_pokok;
    }else{
        tunjangan = 0;
    }
    printf("Tunjangan yang didapatkan: %d", tunjangan);
    return 0;
}