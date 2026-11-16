#include <stdio.h>
#include <stdlib.h>

int gcd(int m,int x);

int main(void)
{
    int n;
    int answer;

    scanf("%d",&n);

    if (n > 9966990)
{
       printf("NG");
       return 0;
}
    answer = gcd(9966990,n);

    printf("%d",answer);

    return 0;
}

int gcd(int m,int x)
{
    
    int a = m;
    int b = x;
    int r;

    while(b != 0)
{
     r = a%b;
     a = b;
     b = r;
}
    return abs(a);
}
