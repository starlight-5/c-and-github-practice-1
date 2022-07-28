#include <stdio.h>
int main(void)
{
    char str[40] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int start, end, step;
    printf("시작 마지막 번호를 입력해주세요: ");
    scanf("%d %d", &start, &end);
    printf("1~25사이의 간격을 입력해주세요: ");
    scanf("%d", &step);
    str[end] = '\0';
    int i = 0;
    for (i; start - 1 + i <= end; i += step)
        printf("%c", str[start - 1 + i]);

    return 0;
}
