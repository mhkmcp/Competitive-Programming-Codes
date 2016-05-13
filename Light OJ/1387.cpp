/** Accepted

    Ad-hoc
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int tc, q,cn = 0;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&q);
        long long int res = 0;
        printf("Case %d:\n",++cn);
        while(q--)
        {
            char st[8];
            scanf("%s",st);
            if(!strcmp(st,"donate"))
            {
                int tk;
                scanf("%d",&tk);
                res += tk;
            }
            else if(!strcmp(st,"report"))
            {
                printf("%lld\n",res);
            }
        }
    }
    return 0;
}
