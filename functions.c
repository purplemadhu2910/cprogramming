#include <stdio.h>
void greeting(int a, int b){
    /*for(int i=0;i<=5;i++){
        printf("\nHello world!");
    }*/
    if(a<10){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a = 4;
    int b = 3;
    printf("a is greater tha b");
    greeting();
}
