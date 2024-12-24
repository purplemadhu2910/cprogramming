#include <stdio.h>
int calculateFee(int weight){
    int fee = 0;
    if(weight <= 15){
        fee = 0;
    }else if(weight <= 25){
        fee = 10;
    }else{
        fee = 10 + (weight - 25) * 2;
    }
}

int main(){
    int weight;
    printf("Enter the weight of the bag: ");

    int fee = calculateFee(weight);
    printf("The baggage fee is: %d",fee);

    return 0;

}
