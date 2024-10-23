/*
Buatlah algoritma dan program yang menerima input nama, 
kemudian mencetak halo dikuti nama tersebut sebanyak 5 kali.*/

#include <stdio.h>

int main(){
    char nama[25];
    printf("Input nama: ");
    scanf("%s",&nama);
    for (int i = 0; i<5; i++){
        printf("Halo %s\n", nama);
    }
    return 0;
}