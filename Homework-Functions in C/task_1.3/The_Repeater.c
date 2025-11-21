#include <stdio.h>

 void printSymbol(char symbol, int count){
    while (count > 0){
        printf("%c", symbol);
        count--;

    }
    
 }

 int main(){
    printSymbol('*', 10);

 }