#include <stdio.h>
void main(){
    int nums[10];
    int i;
    int high;
    for(i=0;i<10;i++){
        printf("enter the %d number : " ,i+1);
        scanf("%d",&nums[i]);
    }
    high=nums[0];
    for(i=1;i<10;i++){
        if(high<nums[i])
            high=nums[i];
    }
    printf("the highest number enterd is %d\n",high);
}

