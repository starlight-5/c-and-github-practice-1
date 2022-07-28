#include <stdio.h>
int main(void)
{   int i1=0,i2=0,i3=0;/*배열 수를 위한 변수 생성*/
    int j,k,m;
scanf("%d %d %d",&i1,&i2,&i3);

    int r[i1],g[i2],b[i3];
    for(j=0;j<i1;j++)/*배열 0부터 배열 수-1까지 배열에 수 넣기*/
    {
        r[j]=j;
    }
    for(j=0;j<i2;j++)
    {
        g[j]=j;
    }
    for(j=0;j<i3;j++)
    {
        b[j]=j;
    }
    j=0;k=0;m=0;/*변수 초기화*/
    for(j;j<i1;j++)/*각 세 배열의 인덱스에 있는 값을 반복없이 나열하기*/
    {
        for(k;k<i2;k++)
        {
            for(m;m<i3;m++)
            {   
                printf("%d %d %d\n",r[j],g[k],b[m]);
            }
            m=0;
        }
        k=0;
    }
    printf("%d",i1*i2*i3);
}
