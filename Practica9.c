#include <stdio.h>

int main (int argc, char *argv[]) {
    int n, contador_aprobados=0, contador_suspensos=0;
float nota;
printf ("Introduce el número de alumnos \n");
scanf ("&d", &n) ;
for (int i=1; i<=n; i+){
printf ("Introduce la nota del alumno S\n", i);
scanf ("%f", &nota);
if (nota>=5){
contador_aprobados++;
} 
else{
contador_suspensos++;}
} 
printf ("El número de alumnos aprobados es: 8d y el de alumnos auspensos es: 8dln", contador_aprobados, contador_suspensos);
    return 0;
}