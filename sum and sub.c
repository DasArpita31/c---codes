#include<stdio.h>
int main()
{
    int i,j;
    int numofrows,numofcols;
    int A[20][20],B[20][20],C[20][20];
    printf("Enter the number of rows and cols:");
    scanf("%d %d",&numofrows,&numofcols);
    printf("Enter elements for a matrix\n");
    for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {printf("A[%d][%d]=",i,j);
        scanf("%d",&A[i][j]);}
      printf("\n");
    }

for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {
        printf("%d",A[i][j]);
        }
      printf("\n");
    }
printf("Enter elements for B matrix\n");
    for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {printf("B[%d][%d]=",i,j);
        scanf("%d",&B[i][j]);}
      printf("\n");
    }

for(i=0;i<numofrows;i++)
    {
        for(j=0;j<numofcols;j++)
        {
        printf("%d",B[i][j]);
        }
      printf("\n");
    }
    for(i=0;i<numofrows;i++)
   {
    for(j=0;j<numofcols;j++)
{
    C[i][j]=A[i][j]+B[i][j];
}
    }
printf("\nA+B=");
for (i=0;i<numofrows;i++)
{
    printf("\t\t");
for (j=0;j<numofcols;j++)
   {
    printf("%d",C[i][j]);
   }printf("\n");
}
}
