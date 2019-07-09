#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int a, b, resultado;
    const char * correcto[] = {"Muy bien!\n", "Excelente!\n", "Buen trabajo!\n", "Sigue haciendolo  bien\n"};
    const char * incorrecto[] = {"No. Por Favor trata de nuevo\n", "Incorrecto, trata una vez mas\n", "No te rindas!\n", "No. Trata de nuevo\n"};
    do{
      srand(time(NULL));
      a = rand() % 10;
      b = rand() % 10;
      printf("¿Cúanto es %d veces %d?\n", a, b);
      scanf("%d", &resultado);
      if(resultado == a*b){
        printf("%s",correcto[rand()%4]);
      }else{
        do{
          printf("%s", incorrecto[rand()%4]);
          printf("¿Cúanto es %d veces %d?\n", a, b);
          scanf("%d", &resultado);
        }while(resultado != a*b);
        printf("%s",correcto[rand()%4]);
      }
      printf("Quieres intentar con una nueva multiplicación? \nSi ingresa 1 \nNo ingresa otro número \n");
      scanf("%d", &resultado);
    }while(resultado == 1);

}