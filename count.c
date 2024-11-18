#include <stdio.h>

int main() {
    int num,count;
    count=0;
    do{
        printf("\nenter a number for num: " );
        scanf("%d",&num);
        printf("\nthe number you entered is: %d",num);
        count++;
    }while(num!=0);
    printf("\nthe total number entered is :%d",--count);
        
    

    return 0;
}