/* 1.
#include<stdio.h>
int main ()
{
for(int i=0; i<=10; i++){
    if(i%2 == 0){
        printf(" %d",i);
    }
}
printf("\n");
int j=0;
while(j<=10)
{
    if(j%2 == 0)
    {

        printf(" %d",j);
    }
    j++;

}
printf("\n");
int k;
do
{
    if(k%2 == 0)
    {

        printf(" %d",k);
    }
    k++;

}
while(k<=10);
       return 0;
}*/




/* 2.
#include<stdio.h>
int main ()
{
char a='a';
char z='z';
for(char a='a';a<=z; a++){
    printf("%c\n",a);
}
   return 0;
}*/

/* 3.
#include<stdio.h>
int main ()
{
char a='a';
char b='z';
for(char a='a'; a<=b; a++)
{
    printf("ASCII value of %c is %d\n", a,a);
}
   return 0;
}*/


/* 4.
#include<stdio.h>
int main ()
{
    int i,n;
    n=5;
    for(i=1; i<=10; i++)
    {
        printf("%d\n",5*i);
    }
    return 0;
}*/

/* 5.
#include<stdio.h>
int main ()
{
 int a=100;
 for(a=100; a>=0; a--)
 {
     printf("%d\n",a);
 }
    return 0;
}*/

/* 6.
#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    for(n; n!=0; n=n/10)
    {
        r = n % 10;
        sum = sum + r;
    }
    printf("Sum of digits of a number = %d\n", sum);

return 0;
}*/

/*7.
#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of all even number between 1 to %d = %d", n, sum);

    return 0;
}*/

/* 8.
#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of all odd number between 1 to %d = %d", n, sum);

    return 0;
}*/



