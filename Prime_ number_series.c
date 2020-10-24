#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter a number= ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            break;
        }
    }
    if(j==i)
    {
        printf("\t %d",j);
    }
}
return 0;
}

    
