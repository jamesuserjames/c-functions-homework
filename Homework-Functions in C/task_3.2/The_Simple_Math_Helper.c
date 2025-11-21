#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int main(){
    int a = 10;
    int b = 5;
    printf("%d\n", add(a, b));
    printf("%d\n", subtract(a, b));
}