/** Accepted

    Factorial of Big Number
*/

#include <iostream>
#include <cstdio>
#define MAX 2000

using namespace std;

int res[MAX];

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
    int res_size,x,n;
    register int zr,on,tw,th,fr,fv,sx,sn,et,nn;
    while(scanf("%d",&n)&&n)
    {
        res[0] = 1;
        int res_size = 1;
        zr = on = tw = th = fr = fv = sx = sn = et = nn = 0;

        for (x=2; x<=n; x++)
            res_size = multiply(x, res, res_size);

        for(int i=res_size-1; i>=0; i--)
        {
            if(res[i] == 0)
                zr++;
            else if(res[i] == 1)
                on++;
            else if(res[i] == 2)
                tw++;
            else if(res[i] == 3)
                th++;
            else if(res[i] == 4)
                fr++;
            else if(res[i] == 5)
                fv++;
            else if(res[i] == 6)
                sx++;
            else if(res[i] == 7)
                sn++;
            else if(res[i] == 8)
                et++;
            else if(res[i] == 9)
                nn++;
        }
        printf("%d! --\n",n);
        printf("   (0)    %d    (1)    %d    (2)    %d    (3)    %d    (4)    %d\n",zr,on,tw,th,fr);
        printf("   (5)    ");
        if(zr >= 100)
        printf("%3d    ",fv);
        else if(zr <99 and zr > 9)
            printf("%2d    ",fv);
        else printf("%d    ",fv);
        printf("(6)    ");
        if(on >= 100)
            printf("%3d",sx);
        else if(on <99 and on > 9)
            printf("%2d",sx);
        else printf("%d",sx);
        printf("    (7)    ");
        if(tw >= 100)
            printf("%3d    ",sn);
        else if(tw <99 and tw > 9)
            printf("%2d    ",sn);
        else printf("%d    ",sn);
        printf("(8)    ");
        if(th >= 100)
            printf("%3d    ",et);
        else if(th <99 and th > 9)
            printf("%2d    ",et);
        else printf("%d    ",et);
        printf("(9)    ");
        if(fr >= 100)
           printf("%3d\n",nn);
        else if(fr <99 and fr > 9)
            printf("%2d\n",nn);
        else printf("%d\n",nn);
    }

    return 0;
}
