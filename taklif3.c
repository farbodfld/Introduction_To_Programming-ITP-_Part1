#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int valueMax = a>b ? a:b;
valueMax = c > valueMax ? c : valueMax;
int valuemin = a<b ? a:b;
valuemin = c < valuemin ? c: valuemin;
int sum = valueMax + valuemin;
printf ("%d",sum);
return 0;
}