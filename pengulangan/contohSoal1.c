/*
Apabila terdapat 10 nilai yang dimasukkan melalui alat input. 
Buat algoritma untuk menghitung total nilai dari kesepuluh nilai yang dimasukkan tersebut!*/

#include <stdio.h>

int main(){
    int total = 0, bilangan;
    for (int i = 1; i <=10; i++){
        printf("Masukan nilai ke-%i :", i);
        scanf("%d",bilangan);
        total += i;
    }
    printf("Total: %d", total);
    return 0;
}