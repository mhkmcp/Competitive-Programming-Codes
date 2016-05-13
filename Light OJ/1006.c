/** Accepted

    Implementation
*/

#include<stdio.h>
#include<math.h>
typedef long long int lli;

int main()
{
    lli a,b,c,d,e,f,i,n,cases=0,tc,arr[10001];
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&n);
        arr[0]=a; arr[1]=b; arr[2]=c; arr[3]=d; arr[4]=e; arr[5]=f;
        for(i=6; i<=n; i++)
        {
            arr[i]=(arr[i-6]+arr[i-5]+arr[i-4]+arr[i-3]+arr[i-2]+arr[i-1])%10000007;
        }
        printf("Case %lld: %lld\n",++cases,arr[n]%10000007);
    }

    return 0;
}
