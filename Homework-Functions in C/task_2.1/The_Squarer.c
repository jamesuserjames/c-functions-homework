#include <stdio.h>

int getSquare(int num){
    int result = num * num;
    return result;
    
}

int main(){

    printf("%d", getSquare(7));
}