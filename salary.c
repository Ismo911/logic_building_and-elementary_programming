#include <stdio.h>
int main(){
    char name[50];
    int basic;
    int daper;
    float bonper;
    float loandet;
    float salary;
    printf("pls enter your name\n");
    scanf("%s",&name);
    printf("pls enter your basic\n");
    scanf("%d",&basic);
    printf("pls enter your daper\n");
    scanf("%d",&daper);
    printf("pls enter your bonper\n");
    scanf("%f",&bonper);
    printf("pls enter your loandet\n");
    scanf("%f",&loandet);
    salary=basic+(basic*daper)/100+(bonper*basic/100)-loandet;
    printf("name  basic  salary");
    printf("\n%s      %d    %.2f", name,basic,salary);
    return 0;
}    