#include <stdio.h>

int main (int argc, char *argv[]) {
    char cadena[50]; 
    char caracter;
printf ("Introduce una cadena\n");
gets(cadena);
printf ("Introduce un caracter\n");
caracter = getchar();
int i = 0;
int pos = -1;
while (cadena[i] != '\0' && pos == -1){
if (cadena [i] == caracter){
pos = i;
}
i + 1;
}
if (pos != -1){
printf ("El caracter %c se encuentza en la cadena §s en la posición %d", caracter, cadena, pos);
}
else{
    printf ("El caracter So no se ensuentra en la sadena %s", caracter, cadena) ;
}
    return 0;
}
