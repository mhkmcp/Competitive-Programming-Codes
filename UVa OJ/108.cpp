/// Accepted

#include <bits/stdc++.h>

using namespace std;

int maxSumSubMatrix(int mat[][102] , int rows , int columns)
{
    int L, R, maxCurrentSum, maxSum, left, right, up, down;
    L = R = maxCurrentSum = maxSum = left = right = up = down = 0;  // sub matrix indexes

    for(L = 0; L < columns; L++)
    {
        int A[rows];
        for(int i=0 ; i< rows ; i++)
            A[i]=0;

        for(R = L; R < columns; R++)
        {
            for (int i = 0 ; i < rows ; i++)
                A[i] = A[i] + mat[i][R];

            int temp = 0 ,maxEnd, maxStart , currentStart;
            maxCurrentSum = 0;

            for(int j = 0; j < rows; j++)
            {
                temp  = temp + A[j];
                if(temp < 0)
                {
                    temp = 0;
                    currentStart = j+1;
                }

                if(temp > maxCurrentSum)
                {
                    maxCurrentSum = temp;
                    maxEnd = j;
                    maxStart = currentStart;
                }
            }

            if(maxCurrentSum > maxSum)
            {
                maxSum = maxCurrentSum;
                left = L;
                right = R;
                up = maxStart;
                down = maxEnd;
            }
        }
    }
    return maxSum;
}

int main()
{
    int columns, rows, i, j;
    while(cin>>rows)
    {
        columns = rows;
        int mat[102][102];

        for(i = 0; i < rows; i++) {
            for(j = 0; j < columns; j++) {
                scanf("%d",&mat[i][j]);
            }
        }
        int ans = maxSumSubMatrix (mat , rows , columns );

        printf("%d\n",ans);
    }
    return 0;
}

