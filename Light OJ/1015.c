/** Accepted

    Ad-hoc
*/

#include<stdio.h>

int main()
{
    int tc,n,a,caseno=0,sum;
    scanf("%d",&tc);
    while(tc--)
    {
        sum=0;
        scanf("\n%d",&n);
        while(n--)
        {
            scanf("%d",&a);
            if(a>0)
                sum+=a;
        }
        caseno++;
        printf("Case %d: %d\n",caseno,sum);
    }

    return 0;
}
