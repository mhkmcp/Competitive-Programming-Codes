/// Accepted

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char st[100000];
    int ln,i;
    while(gets(st))
    {
        ln = strlen(st);
        for(i=0; i<ln; i++)
            printf("%c",st[i]-7);
        printf("\n");
    }

    return 0;
}
