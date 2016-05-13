/** Accepted

    Ad-hoc
*/

#include<stdio.h>
int main()
{
    long int num,sum,i;

    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%ld",&num);
        if(num == 0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        sum = 0;
        for(i=1; i < num; i++)
        {
            if(num % i == 0)
                sum += i;
        }
        if(num == sum)
            printf("%5ld  PERFECT\n",num);
        else if(num < sum)
            printf("%5ld  ABUNDANT\n",num);
        else if(num > sum)
            printf("%5ld  DEFICIENT\n",num);
    }

    return 0;
}
