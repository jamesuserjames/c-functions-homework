#include <stdio.h>

float milesToKm(float miles){
    return miles * 1.609;
}

int main(){
    printf("%f", milesToKm(10.5));
}