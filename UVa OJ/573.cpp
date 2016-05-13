/** Accepted

    Ad-hoc
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double IH,h,u,d,f;
    int day;
    while(cin>>h>>u>>d>>f && h)
    {
        day = 0;
        f = (double)(u*f/100.0);
        IH = 0.0;
        while(1)
        {
            day++;
            if(u > 0) IH += u;
            u -= f;
            if(IH > h) break;
            IH -= d;
            if(IH < 0) break;
        }
        if(IH > h)
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }

    return 0;
}

