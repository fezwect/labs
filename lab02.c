#include <stdio.h>
#include <math.h>

int main()
{
  float x,y,z;
  scanf("%f",&x);
  if (x >= 0 && x != 1)
  {
    y = (x - 2) * sqrt((1 + x) / (x - 1));
    z = log(y * y - 1);
    printf ("y(x) = %.3lf\nz(y) = %.3lf\n", y, z);
  }
  else
   printf("x value is incorrect!\n");

}
