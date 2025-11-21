#include <stdio.h>

float calculateAverage(int a, int b, int c){
    return (a + b + c) /3.00;
}

int main(){
    printf("%.2f", calculateAverage(2, 2, 3));
}
