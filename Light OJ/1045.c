/** Accepted

   Number Theory
*/
#include<stdio.h>
#include<math.h>

#define pi 2*acos(0.0)
int main()
{
    long long int cases,cn=0,num,i,base,result;
    long double temp,t;

    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&num,&base);

        if(num == 0)
        {
            result = 1;
            printf("Case %lld: %lld\n",++cn,result);
            continue;
        }

        result = floor(((num + 0.5)*log(num) - num + 0.5*log(2*pi))/log(base))+1;

        printf("Case %lld: %lld\n",++cn,result);
    }
    return 0;
}
