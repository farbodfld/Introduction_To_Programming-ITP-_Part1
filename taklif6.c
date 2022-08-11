#include <stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
a = a % 2;
b = b % 2;
c = c % 2;
d = d % 2;
e = e % 2;
int tedadefard = a + b + c + d + e;
int tedadezoj = 5 - tedadefard;
printf("%d %d\n",tedadezoj,tedadefard);
return 0;
}