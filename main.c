#include <stdio.h>
int main()
{
    int mat1[15][15],mat2[15][15],i,j,row1,col1,row2,col2;
    printf("Enter row and colum of first matrix: ");
    scanf("%d%d",&row1,&col1);
    printf("\n");
    printf("Enter row and colum of second matrix: ");
    scanf("%d%d",&row2,&col2);
    while(col1!=row2)
    {
       printf("Error in row and colum:!! try again\n");
       printf("Enter row and colum of first matrix: ");
       scanf("%d%d",&row1,&col1);
       printf("\n");
       printf("Enter row and colum of second matrix: ");
       scanf("%d%d",&row2,&col2);
        
    }
    printf("Enter the element of first matrix:\n");
    //taking input for matrix1
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the element of matrix2:\n");
    //taking inout for matrix2
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    //multiplication start here..
    int result[50][50],k,sum=0;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0;k<col1;k++)
            {
                sum=sum+mat1[i][k]*mat2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    
    printf("First matrix is= \n");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col1;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is= \n");
    for(i=0;i<row2;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication matrix is= \n");
    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    
    }
    return 0;
}