#include <stdio.h>
int main(void)
{
    int che[10];
    int i;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &che[i]);
    }
    for(i=0;i<6;i++)
    {
        if (che[i] >= 0 & che[i] <= 10)
        {
            if (i == 0)
                printf("%d", 1-che[i]);
            else if (i == 1)
                printf("%d", 1-che[i]);
            else if (i == 2)
                printf("%d", 2-che[i]);
            else if (i == 3)
                printf("%d", 2-che[i]);
            else if (i == 4)
                printf("%d", 2-che[i]);
            else
                printf("%d",8-che[i]);
        }
        if(i==5)
        break;
        printf(" ");
    }
    return 0;
}
