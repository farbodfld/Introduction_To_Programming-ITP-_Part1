#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d", &a);
b = a % 10;
a = a / 10;
c = a % 10;
a = a / 10;
a = a + b*100 + c*10;
printf("%d\n", a);
return 0;
}
