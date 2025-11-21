//The_Personalized_Greeter.c
#include <stdio.h>

void greetPerson(int age){
    printf("Hello! I see you are %d years old.", age);
}

int main(){
    int  myAge = 20;
    greetPerson(myAge);
    
}