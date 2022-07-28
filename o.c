#include <stdio.h>
int gift_list[20];//2번문제
int check_shoes(int sh)//3번문제
{
    if (sh == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{   
    int gift, i, j;
    int exchange[20];
    int *ptr = exchange;//4번문제
    printf("선물 코드 1개를 입력하세요: ");//1번문제
    scanf("%d", &gift);
    for (i = 0; i < 10; i++)//2번문제
    {
        printf("선물 코드를 입력하세요: ");
        scanf("%d", &gift_list[i]);
    }
    if (check_shoes(gift) == 1)//3번문제
    {
        printf("이것을 교환할 예정입니다.\n");
    }
    for (i = 0; i <= 4; i++)//5번문제
    {
        for (j = i+1; j <= 10; j++)
        {
            if (gift_list[i] == gift_list[j])
            {
                *ptr = gift_list[j];
                ptr += 1;
            }
            if ( gift_list[i]== 5)
            {
                *ptr = 5;
                ptr += 1;
            }
        }
    }
    for (i = 0; i <=5; i++)//출력이 이상하네요..
        printf("%d\n", exchange[i]);

    return 0;
}