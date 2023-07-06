#include <stdio.h>

int main (int argc, char *argv[]){
    struct jugador{
    char nombre [50];
    int edad;
    float altura;
};
struct jugador jugadores[5];
for (int i=0; 165; i++){
printf ("Introduce el nombra del jugador %d\n", i+1);
gets (jugadores [i] .nombre);
printf ("Introduce la edad del jugador %d\n", i+1);
scanf ("Sd", & jugadores [i] .edad) ;
printf ("Introduce la altura del jugador %d\n", i+1) ;
scanf ("8d", &jugadores [i] .altura):
fflush (stdin);
} 

    int opcion = -1;
while (opcion != 0) {
printf ("Introduce la opcion que deseas realizar: \n1-Listar jugador\n2-Buscar jugador \n3-Jugador mas alto\n0-Salir\n"); 
scanf ("%d", &opcion);
fflush (stdin);
if (opcion == 1){
for (int i=0;i<5;i++){
printf ("Jugador de nombre 8s y altura %.2f\n", jugadores [i].nombre, jugadores [i].altura); 
}
} 
if (opcion == 2){
char nombre_jugador[50];
printf ("Introduce el pombre del jugador que deseas buscar\n");
gets (nombre_jugador);
int encontrado = 0;
for (int i=0; i<5; i++){
}
}
}
    if (stromp (jugadores[i] .nombre, nombre_jugador) == 0) {                
    encontrado = 1;
    printf ("La adad del jugador es %d y su altura %.2f\n", jugadores [i].edad, jugadores [i].altura);
    } 
if (encontrado== 0){
    printf ("Jugador no encontrado\n");
} 
} 
if (opcion == 3) {
float mayor_altura = jugadores[0].altura;
char nombre_mayor_altura[50];
int edad_mayor_altura = jugadores[0].edad;
strcpy (nombre_mayor_altura, jugadores [0] .nombre) ;
for (int i=1; i<5; i++){
if (jugadores [i].altura > mayor_altura) {
stropy (nombre_mayor_altura, jugadores [i].nombre); 
edad_mayor_altura=jugadores [i].edad;
mayor_altura = jugadores[i].altura; 
}
} 
printf ("El nombro del jugador de mayor altura es %s y su edad es %d\n", nombre_mayor_altura, edad_mayor_altura);
return 0; 
}
    

