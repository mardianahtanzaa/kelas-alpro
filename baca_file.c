#include <stdio.h>

void main()
{
  char buff[255];
  FILE *fpointer;

  // membuka file
  if ((fpointer = fopen("puisi.txt","r")) == NULL){
      printf("Error: File tidak ada!");
      exit(1);
  }

  // baca isi file dengan gets lalu simpan ke buff
  fgets(buff, 255, fpointer);
  // tampilkan isi file
  printf("%s", buff);

  // tutup file
  fclose(fpointer);
}
