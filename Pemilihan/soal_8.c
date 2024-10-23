/*8.	Sebuah pasar swalayan akan memberikan diskon 20% kepada pembeli yang total belanjaannya di atas 300.000. Buatlah algoritma untuk menghitung berapa jumlah yang harus dibayar pembeli. Contoh:
INPUT: total belanja = 400.000
OUTPUT: total belanja dikurangi diskon = 320.000*/

#include <stdio.h>

int main(){
    float diskon = 0.2, total_belanja, total;

    printf("Masukan total belanja: ");
    scanf("%f",&total_belanja);

    if(total_belanja > 300000){
        total = total_belanja - (total_belanja*diskon);
    }else{
        total = total_belanja;
    }
    
    printf("Total belanja dikurangi diskon: %.2f", total);
    return 0;
}