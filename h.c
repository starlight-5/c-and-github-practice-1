#include <stdio.h>
int max(int num, int num1)
{
    static int result, result1;
    if (num % 2 == 0 && num1 % 2 == 0)
    {
        result = num / 2;
        result1 = num1 / 2;
        return 2 * max(result, result1);
    }
    else if (num % 3 == 0 && num1 % 3 == 0)
    {
        result = num / 3;
        result1 = num1 / 3;
        return 3 * max(result, result1);
    }
    else if (num % 5 == 0 && num1 % 5 == 0)
    {
        result = num / 5;
        result1 = num1 / 5;
        return 5 * max(result, result1);
    }
    else if (num % 7 == 0 && num1 % 7 == 0)
    {
        result = num / 7;
        result1 = num1 / 7;
        return 7 * max(result, result1);
    }
    else if (result == 0)
        return num * num1;

    else
        return result * result1;
}
int mini(int num2,int num3)
{   static int result2, result3;
    if (num2 % 2 == 0 && num3 % 2 == 0)
    {
        result2 = num2 / 2;
        result3 = num3 / 2;
        return 2 * max(result2, result3);
    }
    else if (num2 % 3 == 0 && num3 % 3 == 0)
    {
        result2 = num2 / 3;
        result3 = num3 / 3;
        return 3 * max(result2, result3);
    }
    else if (num2 % 5 == 0 && num3 % 5 == 0)
    {
        result2 = num2 / 5;
        result3 = num3 / 5;
        return 5 * max(result2, result3);
    }
    else if (num2 % 7 == 0 && num3 % 7 == 0)
    {
        result2 = num2 / 7;
        result3 = num3 / 7;
        return 7 * max(result2, result3);
    }
    else if (result2 == 0)
        return 1;
}
int main(void)
{
    int num,num1;
    num1= mini(4,3);
    num = max(5, 3);
    printf("%d\n",num1);
    printf("%d", num);
    return 0;
}
