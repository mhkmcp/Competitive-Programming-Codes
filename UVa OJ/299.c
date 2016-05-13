/// Accepted

#include<stdio.h>
int main()
{
    int n,i,j,cnt,t,tc,a[53];
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        cnt=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<(n-i-1); j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cnt);
    }

    return 0;
}

