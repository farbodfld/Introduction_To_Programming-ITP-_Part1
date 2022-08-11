#include <stdio.h>
int main()
{
char c,d;
scanf("%c %c",&c,&d);
int a = c;
int b = d;
int valuemin = a<b ? a:b;
char charmin = a<b ? a:b;
printf("\"%c\" -> code = %d\n",charmin,valuemin);
return 0;
}
