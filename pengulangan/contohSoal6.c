/*
Buatlah	algoritma	dan	program	untuk	
menghitung	jumlah deret 1+2+3+4+…+N
*/

#include <stdio.h>

int main(){
    int n, total = 0;
    printf("Masukan nilai N: ");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){
        printf("%d + ", i);
        total +=i;
    }
    printf("Total Nilai: %d", total);
    return 0;
}