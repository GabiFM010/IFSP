#include <stdio.h>

int somar1();

int main(){
    int i = 0;

    printf("%d\n", i);

    somar1(i);

    printf("%d\n", i);
}

int somar1(int i){
    i++;
    printf("%d\n", i);
}