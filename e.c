#include <stdio.h>
int num1,num2,num3,num4,num5,num6,result,result1;
int big_num(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    if (num2 > num1)
    {
        if (num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
}int mini_num(int num4, int num5, int num6)
{
    if (num4 < num5)
    {
        if (num4 < num6)
        {
            return num4;
        }
        else
        {
            return num6;
        }
    }
    if (num5 < num4)
    {
        if (num5 < num6)
        {
            return num5;
        }
        else
        {
            return num6;
        }
    }
}
int main(void)
{
    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("세 정수를 입력하세요: ");
    scanf("%d %d %d", &num4, &num5, &num6);
    result=big_num(num1, num2, num3);
    result1=mini_num(num4,num5,num6);
    printf("%d\n1%d",result,result1);
    return 0;
}