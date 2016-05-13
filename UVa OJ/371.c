/** Accepted

    Ad-hoc
*/

#include<stdio.h>

int main()
{
    long long int a, b, c, d, t, i, cnt, mx, p;
    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a == 0 && b == 0)
            break;
        if(a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        c = a; d = b;
        mx = 0;
        if(a == 1 && (b == 1 || b == 2))
        {
            mx = 3;
            p = 1;
        }
        else {
        for(a; a<=b; a++)
        {
            t = a;
            cnt = 0;
            while(t!=1)
            {
                if(t%2)
                    t=(3*t)+1;
                else
                    t/=2;
                cnt++;
            }
            if(cnt > mx)
            {
                mx = cnt;
                p = a;
            }
        }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",c,d,p,mx);
    }

    return 0;
}
