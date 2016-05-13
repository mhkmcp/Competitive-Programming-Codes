/** Accepted

    Implementation
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a[100][100],r[100],c[100],k,l,temp,rt,ct,cr,cc;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        k=0;
        for(i=0; i<n; i++)
        {
            temp = 0;
            for(j=0; j<n; j++)
            {
                temp += a[i][j];

            }
            r[k++] = temp;
        }
        k = k-1;
        l = 0;
        for(j=0; j<n; j++)
        {
            temp = 0;
            for(i=0; i<n; i++)
            {
                temp += a[i][j];

            }
            c[l++] = temp;
        }
        l= l-1;
        ct = rt = cr = cc =0;
        for(i=0; i<=k; i++)
        {
            if(r[i]%2){
                rt = i + 1;
                cr++;
            }
        }
        for(i=0; i<=l; i++)
        {
            if(c[i]%2){
                ct = i + 1;
                cc++;
            }
        }
        temp = abs(rt-ct);
        if(rt == 0 && ct == 0 && temp == 0)
            printf("OK\n");
        else if(cr == 1 && cc == 1)
            printf("Change bit (%d,%d)\n",rt,ct);
        else if(cr > 1 || cc > 1)
            printf("Corrupt\n");

    }

    return 0;
}


