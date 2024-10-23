/*1.	Buatlah algoritma untuk menentukan sebuah bilangan bulat itu positif atau negatif. Contoh:
INPUT: bilangan bulat = -10 OUTPUT: bilangan negatif
*/
#include <stdio.h>

int main(){
    // deklarasi variable
    int bilangan;

    printf("Input bilangan bulat: ");
    scanf("%d",&bilangan);

    // pemilihan
    if(bilangan > 0){
        printf("Bilangan positif");
    }else if (bilangan < 0)
    {
        printf("Bilangan Negatif");
    }else{
        printf("Bilangan 0");
    }
    
    return 0;
}