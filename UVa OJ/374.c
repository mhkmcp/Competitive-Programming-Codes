/** Accepted

    Big Mod
*/

#include<stdio.h>

typedef long long int lli;
lli func(lli b, lli p, lli m)
{
    if(p == 0)
        return 1;
     else if(p%2==0)
        return (func(b,p/2,m)*func(b,p/2,m))%m;

    return (func(b,p-1,m)*(b%m))%m;
}

int main()
{
    lli res,b,m,p;

    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        res = func(b,p,m);
        printf("%lld\n",res);
    }
    return 0;
}
