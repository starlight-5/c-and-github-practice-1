#include <stdio.h>
int main(void)
{
    int num = 1;
    int sum = 0;
    for (num = 1; num <= 100; num++)
    {
        if (num%10==6)
        {
            continue;
        }
        
        sum += num;
        if (num % 5 == 0)
        {
            sum += num;
        }
        if (sum >= 2000)
        {
            break;
        }
    }
    printf("%d", sum);
    return 0;
    
}
