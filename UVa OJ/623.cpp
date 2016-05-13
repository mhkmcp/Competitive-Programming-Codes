/** Accepted

    Factorial of BigInteger

*/

#include <iostream>

#define MAX 5000

using namespace std;

int Multiply(int x, int res[], int siz);

void Factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int siz = 1;

    for(int x = 2; x <= n; x++)
        siz = Multiply(x, res, siz);

    for(int i = siz-1; i >= 0; i--)
        cout<<res[i];
}
int Multiply(int x, int res[], int siz)
{
    int c = 0, prod;
    for(int i = 0; i<siz; i++)
    {
        prod = res[i]*x + c;
        res[i] = prod % 10;
        c = prod / 10;
    }
    while(c)
    {
        res[siz] = c % 10;
        c = c /10;
        siz++;
    }
    return siz;
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<n<<"!"<<endl;
        Factorial(n);
        cout<<endl;
    }
    return 0;
}
