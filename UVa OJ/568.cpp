/** Accepted

    Factorial of Big Integer
*/

#include <iostream>
#include <cstdio>

using namespace std;
#define MAX 42000

int multiply(int x, int res[], int res_size);

int factorial(int n)
{
    int res[MAX],ans;

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    for (int i= 0; i<=res_size-1; i++){
        if(res[i] == 0)
        {
            continue;
        }
        else if(res[i] != 0)
        {
            ans = res[i];
            break;
        }
    }
    return ans;
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n;
    while(cin>>n)
    {
        printf("%5d -> %d\n",n,factorial(n));
    }

    return 0;
}

