/** Accepted

    Ad-hoc
*/

#include<stdio.h>

int main()
{
    int cases,caseno=0,yp,lp,ud=4,oc=3,ee=5,result;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d%d",&yp,&lp);
        if(yp<=lp)
            result=oc*3+lp*4+ee*2;
        else
            result=(yp-lp)*4+oc*3+ee*2+yp*4;

        printf("Case %d: %d\n",++caseno,result);
    }

    return 0;
}
