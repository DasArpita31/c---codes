#include<stdio.h>
int main()
{
    int n=0,i,f=1,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
   f=f*i;
   }
printf("%d\n",f);
l=f/10;
printf("%d",l);
}
