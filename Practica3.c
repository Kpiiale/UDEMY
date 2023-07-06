#include <stdio.h>

int main (int argc, char *argv[]) {
    float base, altura;
printf ("Introduzca la base del rectangulo");
scanf ("%f", &base);
printf ("Introduzca la altura del rectangulo");
scanf ("%f", &altura);
float area=base * altura;
printf("El area del rectangulo de base %.2f y alkura %.2f es: %.2f", base, altura, area); 
    return 0;
}
