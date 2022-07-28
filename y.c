#include <stdio.h>
void keytovalue(int key1[5], char value[6])
{
    int i, j, temp;
    char temp1;
    int *ptr1=key1;
    char *ptr2=value;
    for (i = 0; i <= 3; i++)
    {
        for (j = i; j <= 4; j++)
        {
            if (*(ptr1+i) > *(ptr1+j))
            {
                temp = *(ptr1+i);
                *(ptr1+i) = *(ptr1+j);
                *(ptr1+j) = temp;

                temp1 = *(ptr2+i);
                *(ptr2+i) = *(ptr2+j);
                *(ptr2+j) = temp1;
            }
        }
    }
    for (i = 0; i <= 4; i++)
        printf("%c",*(ptr2+i));
}
int main(void)
{   int i;
    char play[6] = "abcde";
    int start[5] = {5, 10, 23, 15, 48};
    int time[5] = {2, 2, 3, 2, 1};
    int endtime[5];
    for(i=0;i<=5;i++)
    endtime[i]=start[i]+time[i];
    keytovalue(endtime,play);
    return 0;
}