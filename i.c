#include<stdio.h>
int main(void)
{   
    int arr3[5]={1,2,3,4,5};
    int (*ptr)[5];
    ptr=arr3;
    printf("%d %d %d %d %d", (*ptr)[0], (*ptr)[1],(*ptr)[2],(*ptr)[3],(*ptr)[4]);
    return 0;
    
}