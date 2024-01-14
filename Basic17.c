#include <stdio.h>;

int main()
{
      char lower, upper;

      printf("Please input a uppercase character: ");
      scanf("%c", &upper);

      if(upper>= 'A' && upper <= 'Z'){
            lower = ('a' + upper - 'A');
      }
      else{
            upper = lower;
      }

      printf("The lowercase equivalent is: %c", lower);
      return 0;
}
