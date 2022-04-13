#include <stdio.h>
int main(void)
{
    int num, num1 = 1, num2, num3 = 0;
    printf("몇 개의 정수를 입력하시겠습니까? ");
    scanf("%d", &num);
    while (num1 <= num)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &num2);
        num3 = num3 + num2;
        num1++;
    }
    double num4;
    num4=(double)num3/num;
        printf("%f", num4);
}