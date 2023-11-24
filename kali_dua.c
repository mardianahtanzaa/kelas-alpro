#include <stdio.h>

void kali_dua(int *num){
    *num = *num * 7;
}

void main(){
    int nilai = 9;

    // memanggil fungsi
    kali_dua(&nilai);

    printf("isi variabel angka = %d\n", nilai);
}
