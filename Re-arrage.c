#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,n,i,j,temp;
    printf("pls enter the amount of number you want to sort : ");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    for(i=0;i<n;++i){
        printf("enter the %d number : ",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if(p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
    for(i=0;i<n;++i)
        printf("%d\n",p[i]);
    return 0;
}
                  