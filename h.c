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
int main(void)
{
    int num;
    num = max(1, 3);
    printf("%d", num);
    return 0;
}
