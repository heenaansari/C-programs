#include<stdio.h>
int main()
{
    //program for  fibonacci series e.g. 0,1,1,2,3,5,8
    //program to  print  elements of a  fibonacci  series till a number
    int n,i,j,x; 
    printf("\nEnter the number =  ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n+1;i++)
    {
        x=a[i-1]+a[i-2];
        if(x>n)
        {
            break;
        }
        else
        {
            a[i]=x;
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}
