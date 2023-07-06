#include <stdio.h>
#include <math.h> 

int main (int argc, char *argv[]) {
    struct cilindro{
        float diametro;
        float carrera;
};
struct motor{
int identificador;
struct cilindro cilindrol;
int num_cilindros;
float cilindrada;
};
struct motor motorl;
printf ("Introduce el identificador\n");
scanf ("%d", &motor1.identificador);  
printf ("Introduce el diametzo der sidiadro (mm) \n") ;
scanf ("%f", &motorl.cilindrol.diametro);
printf ("Introduce la cazzata dat aidiadro (mm) \n");
scanf ("%f", &motorl.cilindrol.carrera);
printf ("Introduce el numero de cidindros\n");
scanf ("%d", &motorl.num_cilindros);
motor1.cilindrada = (motor1.num_cilindros* (motor1.cilindro1.carrera/10) *M_PI*pow ( (motor1.cilindro1.diametro/10),2)) /4;
printf ("Identificadox: d", motor1.identificador);
printf ("Diametro (mm) : %.2f", motor1.cilindro1.diametro);
printf ("Carrera (mm):%.2f ", motorl.cilindrol.carrera);
printf ("No ciliodros: °d", motorl.num_cilindros);
printf ("Cilindrada: %2f", motor1.cilindrada) ;
    return 0;
}
