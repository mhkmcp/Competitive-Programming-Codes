/// Accepted

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char st[150];
    int i,ln,t;

    while(gets(st)!= EOF)
    {
        ln = strlen(st);
        t = 0;
        for(i=0; i<ln; i++)
        {
            if(st[i]=='"' && t == 0){
                printf("``");
                t = 1;
            }
            else if(st[i]=='"' && t == 1)
            {
                printf("''");
                t = 0;
            }
            else
                printf("%c",st[i]);
        }
        printf("\n");
    }

    return 0;
}
