#include <stdio.h>

int getPerimeter(int a, int b, int c){
    int result = a + b + c;
    return result;
    
}

int main(){
    int a = 5;
    int b = 5;
    int c = 5;
    printf("The perimeter is: %d", getPerimeter(a, b, c));
    
}