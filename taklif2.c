#include <stdio.h>
int main()
{
double a , b,c,d,h;
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

h = (a+b+c+d)/4;
printf("average = %0.3lf\n",h);
return 0;
}