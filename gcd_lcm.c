#include <stdio.h>

int main()
{
    int n1=20;
    int n2=30;
    int  x1=n1;
    int x2=n2;
    int gcd;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
            gcd=n1;
        }
        else
        {
            n2=n2-n1;
            gcd=n2;
        }
    }
    printf("\n%d gcd\n lcm %d",gcd,((x1*x2)/gcd));
    return 0;
}
