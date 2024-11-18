#include <stdio.h>

int main() {
//a leap year is a year that is divisible by 4 or 400 and not divisible by 100
    int year;
    printf("pls enter the year you want to check : ");
    scanf("%d",&year);
    if(year%4==0 &&year%100!=0 ||year%400==0){
        printf(" %d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}