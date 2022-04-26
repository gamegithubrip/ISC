#include <stdio.h>
int extended_gcd(int a, int b, int *x, int *y)
{
if (a == 0)
{
*x = 0;
*y = 1;
return b;
}
int _x, _y;
int gcd = extended_gcd(b % a, a, &_x, &_y);
*x = _y - (b/a) * _x;
*y = _x;
return gcd;
}
int main()
{
int a;
printf("Enter Value of a:");
scanf("%d",&a);
int b;
printf("Enter Value of b:");
scanf("%d",&b);
int x, y;
printf("The GCD is %d\n", extended_gcd(a, b, &x, &y));
printf("x = %d, y = %d", x, y);
return 0;
}
