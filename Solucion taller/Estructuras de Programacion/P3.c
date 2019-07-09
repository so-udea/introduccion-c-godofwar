#include <stdio.h>

void main() {

  int n;

  printf("Ingrese el número de renglones: ");
  scanf("%d", &n);

  for(int i = 1; i<= n; i++){
    for(int j = 1; j <= i; j++ ){
      if(i%2 == 1){
        printf("%d", j%2);
      }else{
        printf("%d", ((j+1)%2));
      }
    }
    printf("\n");
  }
}