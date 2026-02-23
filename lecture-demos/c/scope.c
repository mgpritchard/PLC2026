#include <stdio.h>

int doubleX(){
    x = x*2;
    return x;
}

int main(int argc, char *argv[]){
    int x=5;
    int x2=doubleX();
    printf("x2: %i",x2);
}