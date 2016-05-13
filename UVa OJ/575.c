/** Accepted

    Number Theory
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int num;
    int i,l;
    char a[35];

    while(1)
    {
        gets(a);
        l = strlen(a);
        if((l == 1) && (a[0] - 48) == 0)
            break;

        num = 0;
        for(i = 0; l!=0; i++)
        {
            num += (a[i] - 48)*((pow(2,l)-1));
            l--;
        }
        printf("%lld\n",num);
    }

    return 0;
}
