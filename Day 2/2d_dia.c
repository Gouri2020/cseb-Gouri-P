#include<stdio.h>
int main()
{
    int arr[20][20];
    int i,j,m,n;
    printf("Enter the no of rows\n");
    scanf("%d",&m);
    printf("Enter the no of columns\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i][i]);
    }
    printf("\nNon diagonal elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
              printf("%d",arr[i][j]);
            }
        }
    }
    printf("\nUpper diagonal elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
              printf("%d",arr[i][j]);
            }
        }
    }
    printf("\nLower diagonal elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
              printf("%d",arr[i][j]);
            }
        }
    }
 return 0;
}

