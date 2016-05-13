/** Accepted

    Palindrome Number
*/

#include<stdio.h>

int main()
{
    int tc,casee=0;
    long long int num,rev,ab;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld",&num);
        ab=num;
        rev=0;
        while(num>0){
            rev=rev*10+num%10;
            num/=10;
        }
        casee++;
        if(ab==rev)
            printf("Case %d: Yes\n",casee);
        else
            printf("Case %d: No\n",casee);
    }

    return 0;
}
