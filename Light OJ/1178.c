/** Accepted

    Area of a Trapezium
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int tc,cn=0;
    double a,b,c,d,h,res,p;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        p=((a-c)*(a-c)+d*d-b*b)/(2*(a-c));
        h=sqrt(d*d-p*p);
        res=0.5*p*h+c*h+0.5*(a-c-p)*h;

        printf("Case %d: %3.7lf\n",++cn,res);

    }
    return 0;
}

