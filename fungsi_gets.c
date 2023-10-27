#include <stdio.h>

int main () {
   char nama[50], hobi[50];

   printf("Nama: ");
   gets(nama);
   
   printf("Hobi yang kamu sukai: ");
   gets(hobi);

   printf("You entered: %s\n", nama);
   printf("Hobby : %s\n", hobi);

   return(0);
}
