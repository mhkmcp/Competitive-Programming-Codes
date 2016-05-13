/** Accepted

    Parity Problem
*/

#include<stdio.h>
int main()
{
    long long int cases,num,cn=0,one;

    scanf("%lld",&cases);
    while(cases--)
    {
        one=0;
        scanf("%lld",&num);
        while(num!=0)
        {
            if(num%2)
                one++;;
            num=num/2;
        }
        if(one%2)
            printf("Case %lld: odd\n",++cn);
        else
            printf("Case %lld: even\n",++cn);
    }

    return 0;
}
