/* 1.
#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter Two Integers\n");
    scanf("%d %d", &a, &b);

    switch(a > b)
    {
    case 1:
        printf("%d is Maximum", a);
        break;

    case 0:
        printf("%d is Maximum", b);
        break;
    }
}

    return 0;
}*/

/* 2.
#include<stdio.h>
int main()
{
    char op;
    double first,second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf%lf",&first,&second);

    switch(op)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", first,second,first+second);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", first,second,first-second);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", first,second,first*second);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf", first,second,first/second);
        break;
    default:
        printf("Error! operator is not correct");

    }

    return 0;
}*/

/* 3.
#include<stdio.h>
int main()
{
   int n;

    scanf("%d", &n);

    switch(n%2)
    {
    case 0:
        printf("Even");
        break;

    case 1:
        printf("Odd");
        break;
    }

    return 0;
}*/

/* 4.
#include<stdio.h>
int main()
{
   char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }


    return 0;
}*/

/* 5.
#include<stdio.h>
int main()
{
    double first,second;
    int n;
    printf("Please input 2 numbers: ");
    scanf("%lf%lf", &first,&second);
    printf("1. Add\n");
    printf("2. substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Reminder\n");
    printf("Choose one: ");
    scanf("%d",&n);
    int rem=first-(first*second)/second;

    switch(n)
    {
    case 1:
        printf("%.2lf + %.2lf = %.2lf", first,second,first+second);
        break;
    case 2:
        printf("%.2lf - %.2lf = %.2lf", first,second,first-second);
        break;
    case 3:
        printf("%.2lf * %.2lf = %.2lf", first,second,first*second);
        break;
    case 4:
        printf("%.2lf / %.2lf = %.2lf", first,second,first/second);
        break;
    case 5:
        printf("%.2lf rem %.2lf = %.2lf", first,second,rem);
        break;
    default:
        printf("Error! operator is not correct");

    }

    return 0;
}*/




