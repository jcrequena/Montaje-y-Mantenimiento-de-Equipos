#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
float x,y,s,r,p,d;
clock_t start, end;
double cpu_time_used;


printf("Operaciones básicas entre dos números\n");
printf("Introduce el número x:");
scanf("%f", &x);
printf("Introduce el número y:");
scanf("%f",&y);
//Tiempo al inicio
start = clock();

s = x+y;
r = x-y;
p = x*y;
d = x/y;

//Tiempo al fin
end = clock();

//Mostrar resultados por pantalla
//
printf("---Resultados de las operaciones matemáticas básicas---\n");
printf("El resultado de x+y es:%f\n",s);
printf("El resultado de x-y es: %f\n",r);
printf("El resultado de x*y es: %f\n",p);
printf("El resultado de x/y es: %f\n",d);

printf("--Resultados computacionales---\n");
//CLOCKS_PER_SECOND : the number of clock ticks per second
printf("Starting Time:%lu\n",start);
printf("Ending Time:%lu\n",end);
//printf("Starting Time:%g\n", (double) start);
//printf("Ending Time:%g\n", (double) end);

printf("CLOCKS_PER_SEC:%lu",CLOCKS_PER_SEC);
printf("\nNumber of clock ticks:%lu\n",(end - start));

cpu_time_used = (double)(end - start)/CLOCKS_PER_SEC;
//Tiempo transcurrido durante la realización de las 4 operaciones matemáticas
printf("Tiempo transcurrido: %g segundos\n",cpu_time_used);
}
