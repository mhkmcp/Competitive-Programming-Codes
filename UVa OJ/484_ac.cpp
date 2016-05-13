/** Accepted

    Implementation
*/

#include <iostream>
#include <unordered_set>
#include <iterator>
#include <algorithm>

using namespace std;

struct Node
{
    long long int value, no;
} Object[100000000];

int main()
{
    long long int n, t, i = 0;

    unordered_set <int> myset;
    pair < unordered_set < int > :: iterator, bool> ret;

    while(cin>>t)
    {
        ret = myset.insert(t);
        if(ret.second == true)  // dhukse
        {
            Object[i].value = t;
            Object[i++].no = 1;
        }
        else if(ret.second == false)    // already ase
        {
            n = t;
            for(int k = 0; k < i; k++)
            {
                if(Object[k].value == n)
                {
                    Object[k].no = Object[k].no + 1;
                    break;
                }
            }
        }
    }

    for(int j = 0; j < i; j++)
    {
        cout<<Object[j].value<<" "<<Object[j].no<<endl;
    }

    return 0;
}
