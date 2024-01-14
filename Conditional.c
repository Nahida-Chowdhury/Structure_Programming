/* 1.
#include<stdio.h>
int main (){
int a;
scanf("%d",&a);
if(a%2==0){
    printf("Even");
}
else{
    printf("Odd");
}
return 0;
}*/

/* 2.
#include<stdio.h>
int main() {

  double a, b, c;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (a >= b && a >= c)
    printf("%.2lf is the largest number.", a);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (b >= a && b >= c)
    printf("%.2lf is the largest number.", b);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (c >= a && c >= b)
    printf("%.2lf is the largest number.", c);

  return 0;
}*/


/* 3.
#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a>b)
    {
        printf("%lf",a);
    }
    else
    {
        printf("%lf",b);
    }
    return 0;
}*/

/* 4.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c){
            printf("%d is largest",a);}
        else{
            printf("%d is largest",c);}
    }
    else if(b>=c){
        printf("%d is largest",b);}
    else{
        printf("%d is largest",c);}
    return 0;
}*/

/* 5.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("It is a ALPHABET");
    }
    else

    {
        printf("It is NOT a ALPHABET");
    }
    return 0;
}*/

/* 6.
#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>0)
    {
        printf("Positive");
    }
    else if (a<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}
*/

/* 7.
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a'  && n<='z')
    {
        printf("It's a lowercase alphabet");
    }
    else if(n>='A'  && n<='Z')
    {
        printf("It's a uppercase alphabet");
    }
    else
    {
        printf("It's not an alphabet");
    }


    return 0;
}*/

/* 8.
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        printf("It's a VOWEL");
    }
    else
    {
        printf("It is CONSONANT");
    }



    return 0;
}*/

/* 9.
#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter any character :");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a' && ch<='z'))
    {
        printf("%c is ALPHABET",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is digit",ch);
    }
    else
    {
        printf("%c is special character",ch);
    }

    return 0;
}*/

/* 10.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Input the values for Number1 and Number2 : ");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("Number1 and Number2 are equal");
    }
    else
    {
        printf("Number1 and Number2 are not equal");
    }
    return 0;
}*/

/* 11.
#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("candidate’s age is eligible for casting the vote");
    }
    else
    {

        printf("candidate’s age is not eligible for casting the vote");
    }
    return 0;
}*/

/* 12.
#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Please input three numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%.2lf is the largest number ", a);
    }
    else if(b>=a && b>=c)
    {
        printf("%.2lf is the largest number ", b);
    }
    else
    {
         printf("%.2lf is the largest number ", c);
    }

    return 0;
}*/





