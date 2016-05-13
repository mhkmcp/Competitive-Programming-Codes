/** Accepted

     Range Minimum Query Problem
*/

#include <iostream>
#include <cstdio>
#define mx 100005

using namespace std;
int arr[mx];
int tree[mx*3];

void init(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e)/2;

    init(Left, b, mid);
    init(Right, mid+1, e);

    if(tree[Left] < tree[Right])
        tree[node] = tree[Left];
    else
        tree[node] = tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if(i > e || j < b)
        return mx;
    if(b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e)/2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid+1, e, i, j);

    if(p1 < p2)
        return p1;
    else
        return p2;
}

int main()
{
    int tc, cn = 0, n, i, q;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&n,&q);
        for(i = 1; i <= n; i++)
            scanf("%d",&arr[i]);
        init(1, 1, n);
        int a,b;
        printf("Case %d:\n",++cn);
        while(q--)
        {
            scanf("%d%d",&a,&b);
            printf("%d\n",query(1, 1, n, a, b));
        }
    }

    return 0;
}
