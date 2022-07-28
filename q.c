#include <stdio.h>
int main(void)
{
    char str[25] = "Hello, NICE to meet you!";
    str[0] = 'h';
    str[7] = 'n';
    str[8] = 'i';
    str[9] = 'c';
    str[10] = 'e';
    printf("%s\n", str);
    printf("바뀐 문자수:5");
    return 0;
}
