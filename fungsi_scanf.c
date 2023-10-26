#include <stdio.h>

int main () {
    // membuat variabel
    char nama[40], alamat_web[50];

    printf("Nama: ");
    scanf("%[^\n]s", &nama);

    printf("Alamat web: ");
    scanf("%[^\n]s", &alamat_web);

    printf("\n======================\n");
    printf("Nama yang akan diinput: %s\n", nama);
    printf("Alamat web yang akan diinput: %s\n", alamat_web);
   
    return 0;
}
