#include <stdio.h>
int main(void)
{
    int num, num1=9;
    printf("정수를 한 개 입력하세요: ");
    scanf("%d", &num);
    while (num1 >= 1)
    {
        printf("%d x %d\n", num,num1);
        num1=num1-1;
    }
}