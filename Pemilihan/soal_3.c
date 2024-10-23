/*3.	Buatlah algoritma untuk menukar tiga buah bilangan bulat x, y, z. Aturan penukaran tiga bilangan tersebut, yaitu: x diisi dengan nilai y, y diisi dengan nilai z, dan z diisi dengan nilai x.
INPUT: nilai x, nilai y, nilai z Contoh: x=2, y=3, z=4
OUTPUT: nilai x, nilai y, nilai z setelah ditukar Contoh: x=3, y=4, z=2
*/

#include <stdio.h>

int main(){
    // deklarasi variabel
    int x, y, z;
    int temp; // variable yang akan digunakan untuk menyimpan nilai sementara

    printf("Masukan bilangan x: ");
    scanf("%d",&x);
    printf("Masukan bilangan y: ");
    scanf("%d",&y);
    printf("Masukan bilangan z: ");
    scanf("%d",&z);

    printf("x = %d, y = %d, z = %d", x, y, z);

    //proses menukar bilangan
    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("\nNilai x, y, dan z setelah ditukar\n");
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}