#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int i, val, max=0;
    srand(time(0)); 
    
    for (i=0; i<10; i++) {
    
     val= rand() % 100; //Geral valores aleatório e guardá-los na variável val
     printf("%d\n", val ); //imprimir os valores guardados no val

       
        
        if (val>max){
        max=val;

        } 
   
    } printf("Maior numero: %d", max);
}
