#include <stdio.h>

int main (int argc, char *argv[]) {
    float euros;
printf ("Introduce les euros que quieres convertirin");
scanf ("%f" ,&euros);
//pesetas = euros * 166.386
printf ("%.2f euros equivalen a %.2f pesetas", euros, euros*166.386) ;
    return 0;
}
