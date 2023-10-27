#include <stdio.h>

int main(){
    char nama[50], alamat[50];
    
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Alamat: ");
    fgets(alamat, sizeof(alamat), stdin);
   
    printf("\n=====================\n");
    printf("Nama anda: %s", nama);
    printf("Alamat anda: %s", alamat);
    
    return 0;
}
