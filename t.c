#include <stdio.h>
int main(void)
{
    int arr[] = {100, 200, 300};

    int *p = NULL;

    p = arr;
    printf("%d\n",(*p)++);
    printf("%d",*p);
    
    return 0;
}