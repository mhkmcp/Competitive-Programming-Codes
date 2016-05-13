/** Accepted

    Basic Geometry
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int tc,caseno=0;
    double result,pi,radius;

    scanf("%d",&tc);
    while(tc--){
        pi=2*acos(0.0);
        scanf("%lf",&radius);
        result=((2*radius)*(2*radius))-(pi*radius*radius);
        caseno++;
        printf("Case %d: %0.2lf\n",caseno,result);
    }

    return 0;
}
