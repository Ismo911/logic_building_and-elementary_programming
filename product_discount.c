#include <stdio.h>
int main(){
    int productcode;
    float amount;
    float discount;
    float amount_paid;
    printf("kindly enter a productcode:");
    scanf("%d",&productcode);
    printf("kindly enter an amount:");
    scanf("%f",&amount);
    if(productcode==1){
        if(amount>=500){
            discount = 0.12;
        }
        else if(amount>=300){
            discount = 0.08;
        }
        else{
            discount = 0.02;
        }
    }
    else if(productcode==2){
        if(amount>=2000){
            discount = 0.1;
        }
        else(amount>=1500);{
            discount = 0.05;
        }
    }
    else if(productcode==3){
        if(amount>=5000){
            discount = 0.1;
        }
        else(amount>=2500);{
            discount = 0.05;
        }
    }
    else{
        printf("the productcode entered is not valid\n");
    }
    amount_paid = amount-(amount*discount);
    printf("the total amount arter discount is %.2f",amount_paid);

    return 0;
}