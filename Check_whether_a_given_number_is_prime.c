#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter a number= ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
    if(n%i==0)
        {
            break;
        }
    
 
}
   if(i==n)
    {
        printf("\t %d is a Prime  Number.",n);
    }
    else
    {
        printf("\t %d is a Not a Prime  Number.",n);
    }
return 0;
}
