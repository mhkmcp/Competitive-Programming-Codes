/// Accepted

#include<stdio.h>

int main()
{
    int tc,n,a,b;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        if(n%2)
        {
            a = n/2;
            b = n-a;
        }
        else
            a = b = n/2;
        printf("%d %d\n",a,b);

    }
    return 0;
}
