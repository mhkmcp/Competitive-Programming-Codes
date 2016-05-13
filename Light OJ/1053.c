/** Accepted

    Ad-hoc
*/
#include<stdio.h>

typedef long long int lli;
int main()
{
    int tc,i,casee=0,l;
    lli a[5], max, sum;
    scanf("%d",&tc);
    while(tc--)
    {
        for(i=0; i<3; i++)
            scanf("%lld",&a[i]);
        max = a[0];
        for(i=1, l=0; i<3; i++){
            if(max < a[i]){
                max=a[i];
                l=i;
            }
            }
            for(i=0, sum =0; i<3; i++){
                if(i != l)
                    sum += a[i] *a[i];
            }
            casee++;
            if(max*max==sum)
                printf("Case %d: yes\n",casee);
            else
                printf("Case %d: no\n",casee);

    }
    return  0;
}
