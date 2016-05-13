/** Accepted

    Implementation
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h, m;
    double ans, t;

    while(scanf("%d:%d",&h,&m))
    {
        if(h == 0 && m == 0)
            break;

        ans = abs(0.5*(h*60 - 11*m));

        if(ans > 180.0 )
            ans = (360.0 - ans);

        cout<<fixed<<setprecision(3)<<ans<<endl;
    }

    return 0;
}
