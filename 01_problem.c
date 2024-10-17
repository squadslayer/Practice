#include <stdio.h>

int main(){
    int a=10;
    if (a=11){
        printf("I am 11\n");
    }
    //this statement runs due to a=11 statemen is given in if statement
    else{
        printf("I am not 11\n");
    }
    return 0;
}