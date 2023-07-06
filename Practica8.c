#include <stdio.h>

int main (int argc, char *argv[]) {
    for(int i; i<=100; i++){
        if (i%3==0){
            printf("%d\n", i); 
        }
    }
    return 0;
}