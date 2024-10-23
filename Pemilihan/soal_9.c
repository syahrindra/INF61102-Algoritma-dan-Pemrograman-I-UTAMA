/*9.	Buatlah algoritma untuk menghitung take home pay seorang karyawan setelah dipotong pajak sebesar 5 %. Komponen gaji karyawan tersebut terdiri dari Gaji Pokok, Tunjangan keluarga, dan Upah lembur. Upah lembur dibayar berdasarkan jam lembur sebesar 10.000/jam. Sementara itu, tunjangan keluarga sebesar 500.000 akan didapatkan seorang karyawan yang telah bekerja minimal 2 tahun.
Rumus: Take Home Pay = Gaji Pokok + Tunjangan Keluarga + Upah lembur - 5%×(Gaji Pokok + Tunjangan Keluarga + Upah lembur)
Contoh:
INPUT: Gaji Pokok = 1.000.000, lama bekerja = 2, jam lembur = 10 
OUTPUT: take home pay = 1.520.000
*/

#include <stdio.h>

int main(){
    float take_home_pay, gaji_pokok,tunjangan_keluarga = 0, upah_lembur;
    int lama_bekerja, jam_lembur; 

    printf("Gaji pokok: ");
    scanf("%f",&gaji_pokok);
    printf("Lama bekerja: ");
    scanf("%d",&lama_bekerja);
    printf("Jam lembur: ");
    scanf("%d",&jam_lembur);

    upah_lembur = 10000*jam_lembur;

    if(lama_bekerja >=2){
        tunjangan_keluarga = 500000;
    }
    take_home_pay = gaji_pokok + tunjangan_keluarga + upah_lembur - 0.05*(gaji_pokok + tunjangan_keluarga + upah_lembur);

    printf("Take home pay: %.2f", take_home_pay);
    return 0;
}