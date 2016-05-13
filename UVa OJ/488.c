/** Accepted

    Pattern Matching
*/

#include<stdio.h>

int main()
{
    int tc,n,t,i,j,k;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&n,&t);
        for(k=1; k<=t; k++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=n-1; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            if(!(tc == 0 && k == t))
                printf("\n");
        }
    }
    return 0;
}
