#include<stdio.h>
int main()

{
    int a,b,c,s;

    printf("Please enter a 3 digit number: ");
    scanf("%d", &a);

    b=a/100;
    c=a%10;
    s=b+c;

    printf("The sum is: %d", s);


    return 0;
}
