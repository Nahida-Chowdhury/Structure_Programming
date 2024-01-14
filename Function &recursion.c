/* 1.
#include <stdio.h>
void num(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Old");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    num(a);
}
*/

/* 2.
#include<stdio.h>
int cube (int x)
{
    return x*x*x;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",cube(a));
}*/

/* 3.
#include<stdio.h>
int add(int a,int b)
{
    int ans = a+b;
    return ans;
}
int substr(int a,int b)
{
    int ans1 = a-b;
    return ans1;
}
int multiplies(int a,int b)
{
    int ans2 = a*b;
    return ans2;
}
int divides(int a,int b)
{
    int ans3 = a/b;
    return ans3;
}
int rem (int a,int b)
{
    int ans4 = a%b;
    return ans4;
}
int main ()
{
    printf("sum is :%d\n",add(10,5));
    printf("sum is :%d\n",substr(10,5));
    printf("sum is :%d\n",multiplies(10,5));
    printf("sum is :%d\n",divides(10,5));
    printf("sum is :%d\n",rem(10,5));
}
*/

/* 4.
int sum(int x,int y)
{
    if(x>y) return 0;
    return x+sum(x+1,y);
}
int main()
{
    int low,up;
    printf("Lower limit: ");
    scanf("%d",&low);
    printf("Upper limit: ");
    scanf("%d",&up);
    if(low>0)
    {
        printf("Sum is :%d\n", sum(low,up));
    }
}*/

/* 6.
#include<stdio.h>

int fib (int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fib(n-1)+(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
}*/

/* 7.
#include<stdio.h>
int main()
{
    int fact(int n)
    {
        if(n==1)
            return 1;
        return n*fact(n-1);
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        printf("%d",fact(n));

    }

    return 0;
}*/
