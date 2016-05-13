/// Accepted

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double n,k,p;
    while(scanf("%lf %lf",&n,&p)==2)
    {
        k = pow(p,1/n);
        printf("%.0f\n",k);
    }

    return 0;
}

