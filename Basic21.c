#include<stdio.h>
int main()

{
    int a,b,c;

    printf("Please enter a 3 digit number: ");
    scanf("%d", &a);

    b=a/100;
    c=a%10;

    printf("Square of %d is %d and square of %d is %d", b,b*b,c,c*c);


    return 0;
}
