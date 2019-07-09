#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int x, y, res;
    do{
      srand(time(NULL));
      x = rand() % 10;
      y = rand() % 10;
      printf("¿Cuánto es %d veces %d?\n", x, y);
      scanf("%d", &res);
      if(res == x*y){
        printf("Muy bien!\n");
      }else{
        do{
          printf("No. Por favor intenta nuevamente, ");
          printf("¿Cúanto es %d veces %d?\n", x, y);
          scanf("%d", &res);
        }while(res != x*y);
        printf("Muy bien!\n");
      }
      printf("Quieres intentar con una nueva multiplicación? \nSi ingresa 1 \nNo ingresa otro número \n");
      scanf("%d", &res);
    }while(res == 1);
}