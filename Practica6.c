#include <stdio.h>

int main (int argc, char *argv[]) {
int preciobase, kilometros;
float consumo, preciofinal;
printf ("Introduce el precio base del vehiculon");  
scanf ("d", &preciobase); 
printf ("Introduce loa kilometros"); 
scanf ("%d", kilometros); 
printf ("Introduce el consumo:"); 
scanf ("%f", &consumo); 
if (kilometros<20000 && consumo<=5){
    preciofinal =preciobase * 7.21; 
}

else if (kilometros>20000 && consumo<=5){
    preciofinal =preciobase*1.17; 
}
else if (consumo>5)
preciofinal=preciobase *1.05; 
printf ("El precio final del vehiculo es: %.2f", preciofinal); 
    return 0;
}