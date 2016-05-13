/** Accepted


    Goldbach's Conjecture
*/

#include<stdio.h>

int fn(long long int n)
{
    int i,t;
    if(n<2)
        return 0;
    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long int num, ab, a, i;

    while(1)
    {
        scanf("%lld",&num);
        if(num == 0)
            break;
        for(i = 3; i<=num/2; i++)
        {
            ab = i;
            if((fn(ab) == 1) && (ab%2 == 1))
            {
                if((fn(num-ab) == 1) && ((num - ab)%2 == 1))
                {
                    a = num - ab;
                    break;

                }

            }

        }
        printf("%lld = %lld + %lld\n",num,ab,a);

    }

    return 0;
}
