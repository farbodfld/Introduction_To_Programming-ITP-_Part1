#include <stdio.h>
int main()
{
int A,B,C,D;
float E;
double F;
scanf("%d\n%d\n%d\n%d\n%f\n%lf",&A,&B,&C,&D,&E,&F);
printf("%5d\n%05d\n% +d\n% -d\n%.0f\n%010.5lf\n",A,B,C,D,E,F);
return 0;
}