#include <stdio.h>

void add(int a, int b){
    printf("%d + %d = %d\n", a, b, a+b);
}

void main(){
    add(3, 4);
    add(11, 2);
    add(3, 5);
}
