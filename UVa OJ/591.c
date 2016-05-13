/** Accepted

    Statistical Mean
*/

#include<stdio.h>

int main()
{
    int i,n,sum,mean,cn=0,kp;
    int a[53];
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        sum = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum += a[i];
        }
        mean=sum/n;
        kp = 0;
        printf("Set #%d\n",++cn);
        for(i=0; i<n; i++)
        {
            if(a[i] > mean)
                kp += a[i] - mean;
        }
        printf("The minimum number of moves is %d.\n\n",kp);

    }
    return 0;
}
