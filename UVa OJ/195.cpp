/// Accepted

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cstdio>

using namespace std;

bool comp(const char &a, const char &b)
{
    int delta = tolower(a) - tolower(b);
    return delta ? delta < 0:a<b;
}

int main()
{
    int tc,ln,i;
    char st[1002];
    scanf("%d\n",&tc);
    while(tc--)
    {
        cin>>st;
        ln = strlen(st);
        sort(st, st + ln, comp);
        do
        {
            for(i=0; i<ln; i++)
                cout<<st[i];
            cout<<endl;
        } while(next_permutation(st, st + ln, comp));
    }

    return 0;
}
