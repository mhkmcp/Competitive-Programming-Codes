/// AC by Java BigInteger

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j, t, mx = 1, ln, car, n = 0;
    string result, st;

    for(i = 0; i < 102; i++)
        result[i] = '0';

    while(getline(cin, st))
    {
        n++;

        ln = st.size();
        if(ln == 1 && st[0] == '0')
            break;
        if(mx < ln)
            mx = ln;
        if(n == 1)
        {
            result = st;
            continue;
        }

        car = 0;
        char ch;
        for(i = ln - 1; i >= 0; i--)
        {
            t = st[i]%48 + result[i]%48 + car;
            if(t > 9)
                car = 1;

            //ch = (char) t%10;
            t = t%10;
            //ch = itoa(t, 10);
            result[i] = ch;
        }
    }
    for(j = 0; j < mx; j++)
        cout<<result[j];
    cout<<endl;


    return 0;
}
