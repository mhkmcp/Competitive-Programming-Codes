/** Accepted

    Ad-hoc
*/

#include<stdio.h>
int main()
{
    long long int n,m,t,ct,a,b,max,e;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        a=n; b=m;
        if(n>m)
        {
            t=n;
            n=m;
            m=t;
        }
        max=1;
        for(n; n<=m; n++)
        {
            ct=1;
            e=n;
            while(e!=1)
            {
                if(e%2)
                    e=(3*e)+1;
                else
                    e/=2;
                ct++;
            }
            if(ct>max)
                max=ct;
        }
        printf("%lld %lld %lld\n",a,b,max);
    }
    return 0;
}
