#include <stdio.h>

int getMinDigit(int n)//минимальная цифра
{
   int min, digit;
   min = -1;
   while (n > 0)
   {
     digit = n % 10;
     if (min == -1)
      min = digit;
     else
     if (min > digit)
      min = digit;
     n /= 10;
   }
   return min;
}

int main()
{
   int a, b, sum;
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);
   if (b == 0)
    printf("Error");
   sum = getMinDigit(a) + getMinDigit(b);
   printf("%.3f\n", ((float)sum / (float)b));
}
