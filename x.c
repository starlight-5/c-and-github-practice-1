#include <stdio.h>
int main(void)
{
    int num = 1, num1, num2 = 0;
    while (num <= 5)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &num1);
        if (num1 < 1)
        {
            printf("정수를 다시 입력하세요: ");
            scanf("%d", &num1);
        }
        num2 = num2 + num1;
        num++;
    }
    printf("%d", num2);
}