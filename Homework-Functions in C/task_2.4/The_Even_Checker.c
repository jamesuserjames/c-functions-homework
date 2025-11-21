#include <stdio.h>

int isEven(int number){
    if (number % 2 != 0)
        return 1;
    else
        return 0;
}

int main(){
    printf("%d\n", isEven(4));
    printf("%d\n", isEven(7));
}