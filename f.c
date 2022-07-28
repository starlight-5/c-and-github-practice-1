#include <stdio.h>
int main(void)
{
    int num, num1, dan;
    for (num = 1; num <= 9; num++)
    {
        for (dan=1; dan <= 9; dan++)
        {   if(dan%2==0)
            printf("%d x %d = %2d ", dan, num, dan * num);
        }
    printf("\n");
    }
    return 0;
}
