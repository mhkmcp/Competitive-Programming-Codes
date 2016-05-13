/** Accepted

    Number Theory
*/

#include <iostream>
#include <cstdio>
#define pf printf

#define MAX 1000000

using namespace std;
int self[MAX];
void Made()
{
    unsigned long long int i, j, sum, num;
    for(i = 0; i<=MAX; i++)
    {
        sum = i;
        j = i;
        while(j)
        {
            sum += j%10;
            j /= 10;
        }
        self[sum] = 1;
    }
}

int main()
{
    Made();
    unsigned long long int i;
    for(i = 0; i <= MAX; i++)
    {
        if(self[i] == 0)
            pf("%llu\n",i);
    }

    return 0;
}
