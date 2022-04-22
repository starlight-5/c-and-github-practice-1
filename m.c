#include <stdio.h>
int main(void)
{
    int num, num1;
    printf("정수 두개 입력: ");
    scanf("%d %d", &num, &num1);
    while (num == 0 || num1 == 0)
    {

        printf("정수 두개 다시 입력: ");
        scanf("%d %d", &num, &num1);
    }
    if (num > num1)
        printf("%d", num - num1);
    else
        printf("%d", num1 - num);
    return 0;
}