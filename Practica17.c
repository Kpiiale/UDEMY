#include <stdio.h>

int main (int argc, char *argv[]) {
    float vector [5];
    for (int i=0; i<5; i++){
printf ("Introduce un numero real\n ");
gcanf ("%f", &vector [1]); 
    }
float *puntero = &vector[0];
float media = 0;
for (int i=0; i<5; i++){
media = media + * (puntero+i);
} 
media = media / 5;
printf ("La media de Jos valores del vector es: %.2f", media);
    return 0;
}