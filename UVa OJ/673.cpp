/**  Accepted

    Data Structure : Stack
*/

#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int tc, ln, i, j;
    scanf("%d\n",&tc);
    while(tc--)
    {
        char st[140];
        gets(st);
        ln = strlen(st);
        stack <char> stk;
        char ch;
        int flag = 0;
        while(stk.size())
            stk.pop();
        int cnt = 0;
        for(i = 0; i<ln; i++)
        {
            if(st[i] == '('||st[i] == ')'||st[i] == '['||st[i] == ']')
                cnt++;
        }
        if(cnt == 0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        for(i = 0; i<ln; i++)
        {
            ch = st[i];
            if(ch == '[' || ch == '(')
                stk.push(ch);
            else if(ch == ']' || ch == ')')
            {
                if(stk.empty())
                {
                    flag = 1;
                    break;
                }
                if(ch ==']' && '[' == stk.top())
                    stk.pop();
                else if(ch == ')' && '(' == stk.top())
                    stk.pop();
                else
                    stk.push(ch);
            }
        }
        if(stk.empty() == true && flag == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

