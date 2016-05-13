/** Accepted

    String Processing
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char st[100000];
    int i,ln,cnt;

    while(gets(st))
    {
        ln = strlen(st);
        cnt = 0;
        for(i = 0; i<ln; i++)
        {
            if(isalpha(st[i]) && (!isalpha(st[i+1])))
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
