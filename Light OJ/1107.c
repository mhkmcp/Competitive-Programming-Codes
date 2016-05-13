/** Accepted

    Ad-hoc
*/

#include<stdio.h>
int main()
{
    int tc,x1,x2,y1,y2,num,inpt,c1,c2,cse=0;
    scanf("%d",&tc);
    while(tc--){
        cse++;
        scanf("%d%d%d%d\n",&x1,&y1,&x2,&y2);
        scanf("%d",&inpt);
        printf("Case %d:\n",cse);
        while(inpt--)
        {
            scanf("%d%d",&c1,&c2);
            if((c1>=x1&&c1<=x2)&&(c2>=y1&&c2<=y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}
