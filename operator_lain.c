#include <stdio.h>

void main(){
  
    int *a = 5;
    int b = 4;
    
    printf("alamat memori variabel a adalah %x\n", &a);
    printf("b > 1 adalah %s", b > 1 ? "benar": "salah");

// increment b
    b++;

    printf("b++ = %d\n", b);

    // increment b
    ++b;

    printf("++b = %d\n", b);

    // decrement b
    b--;

    printf("b-- = %d\n", b);

    // decrement b
    --b;

    printf("--b = %d\n", b);

}
