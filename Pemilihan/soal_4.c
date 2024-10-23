/*4.	Buatlah algoritma untuk menukar nilai uang kelipatan 100 menjadi pecahan 100, 1000, dan 5000. Contoh, uang bernilai 6600 apabila dipecah akan menghasilkan 1 buah pecahan 5000, 1 buah pecahan 1000, dan 6 buah pecahan 100. Contoh:
INPUT: nilai uang = 7500
OUTPUT: pecahan 5000 = 1, pecahan 1000 = 2, pecahan 100 = 5*/

#include <stdio.h>

int main(){
    int uang, pecahan_5000, pecahan_1000, pecahan_100, sisa_uang;
    
    //input
    printf("Masukan nilai uang: ");
    scanf("%d",&uang);

    //proses
    pecahan_5000 = uang /5000;
    sisa_uang = uang % 5000;
    pecahan_1000 = sisa_uang /1000;
    pecahan_100 = (sisa_uang %1000)/100;

    //output
    printf("Pecahan 5000 = %d, pecahan 1000 = %d , pecahan 100 = %d ", pecahan_5000, pecahan_1000, pecahan_100);

    return 0;
}