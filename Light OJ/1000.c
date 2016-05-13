/** Accepted

    Simple Addition
*/

#include<stdio.h>

int main()
{
    int a,b,sum,tc,caseno=0;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        if((a<=10 && a>=0)&&(b<=10&&b>=0))
        {
            sum=a+b;
            caseno++;
            printf("Case %d: %d\n",caseno,sum);
        }
    }

    return 0;
}
