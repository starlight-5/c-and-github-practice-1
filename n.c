#include <stdio.h>
int main(void)
{
    int num, num2 = 1, num3;
    while (num2 <= 5)
    {
        printf("\n1~100사이의 정수를 입력하세요: ");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("%d", 10000000);
        }
        else
        {
            num3 = num % 2;
            printf("\n%d", num3);
            int num4 = 1, num5, num6 = 1, num7;

            while (num7 != 1)
            {
                num5 = (num / (num4 = num4 * 2)) % 2;
                num7 = num / (num6 = num6 * 2);
                printf("%d", num5);
            }
            num6 = 1;
            num4 = 1;
            num7 = 2;
        }
        num2 += 1;
    }

    return 0;
}