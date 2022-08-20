#include <stdio.h>
int main(void)
{
    int num=1,num1;
    printf("정수를 입력하세요:");
    scanf("%d",&num1);
    while(num<=num1){
        printf("%d \n",num);
        num++;
    }
    return 0;
    
}
