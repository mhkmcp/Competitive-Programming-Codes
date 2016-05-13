/** Accepted

    Area of Trapezium
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy, area, cs,cn = 0;
    scanf("%d",&cs);
    while(cs--)
    {
        scanf("%d%d%d %d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx = ax+cx-bx;
        dy = ay+cy-by;

        area = ((ax*by + bx*cy + cx*dy + dx*ay) - (ay*bx + by*cx + cy*dx + dy*ax))/2;
        printf("Case %d: %d %d %d\n",++cn,dx,dy,abs(area));
    }

    return 0;
}
