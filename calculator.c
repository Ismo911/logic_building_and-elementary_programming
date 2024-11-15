#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]){
    int i,j,solution;
    char sign;
    printf("enter a sign ( + , - , / , * , ^ for square: ");
    scanf("%c",&sign);
    if(sign=='^'){
        printf("enter a number : ");
        scanf("%d",&i);
        solution=i*i;
        printf("the square of %d is %d\n",i,solution);
    }
    else{
        printf("enter the first number :");
        scanf("%d",&i);
        printf("enter the first number :");
        scanf("%d",&j);
        
        if(sign=='-'){
            solution=i-j;
            printf(" the subtraction for %d and %d is %d\n",i,j,solution);
        }
        else if(sign=='+'){
            solution=i+j;
            printf(" the addition for %d and %d is %d\n",i,j,solution);
        }
        else if(sign=='*'){
            solution=i+j;
            printf(" the multiplication for %d and %d is %d\n",i,j,solution);
        }
        else if(sign=='/'){
            solution=i/j;
            printf("the division for %d and %d is %d\n",i,j,solution);
        }
        else
            printf("such sign not found");
    }
    return 0;
}