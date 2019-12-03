#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[])
{
double x,y,s,r,p,d;
clock_t start=clock();
printf("Operaciones de numeros\n");
printf("Introduce el número x:");
scanf("%lf", &x);
printf("Introduce el número y:");
scanf("%lf",&y);
s=x+y;
r=x-y;
p=x*y;
d=x/y;

printf("El resultado de x+y es:%f\n",s);
printf("El resultado de x-y es: %f\n",r);
printf("El resultado de x*y es: %f\n",p);
printf("El resultado de x/y es: %f\n",d);

printf("....Tiempo transcurrido: %f segundos\n",((double)clock() - start)/CLOCKS_PER_SEC);
}
