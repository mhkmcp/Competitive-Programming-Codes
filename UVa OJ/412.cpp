/** Accepted

    Number Theory
*/

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int gcd(int a,int b)
{
    return b == 0 ? a:gcd(b,a%b);
}
int main()
{
    int n,i,j,a[100],cnt,flag,par;
    double temp,ans;
    while(scanf("%d",&n)&&n)
    {
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        cnt = flag = par = 0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i] != a[j])
                {
                    if(gcd(a[i],a[j]) == 1)
                        cnt++;
                    else flag++;
                }
            }
        }
        if(cnt == 0){
            printf("No estimate for this data set.\n");
            continue;
        }
        else
        {
            par = n*(n-1)/2;
            temp = (double)6.0*par;
            temp = (double)temp/cnt;
            ans = sqrt(temp);
            printf("%.6f\n",ans);

        }
    }

    return 0;
}
