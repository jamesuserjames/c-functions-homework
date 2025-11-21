#include <stdio.h>

int getTotalMinutes(int hours, int minutes){
    return hours * 60 + minutes;
}

int main(){
    int hours = 2;
    int minutes = 15;
    printf("%d", getTotalMinutes(hours, minutes));
}