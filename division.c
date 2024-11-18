/*this program is to accept two numbers a and b and check weather or not a is divisible by b*/
#include <stdio.h>
int main(){
    int a,b;
    printf("enter a number for a : ");
    scanf("%d",&a);
    printf("enter a number for b : ");
    scanf("%d",&b);
    if(a%b==0)
        printf("%d is divisible by %d",a,b);
    else
        printf("%d is not divisible my %d",a,b);
    return 0;        
}