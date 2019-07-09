#include <stdio.h>
int reversaDigitos(int digito);

int main() {

    int digito;
    printf("\nIngrese el número que desea invertir \n");
    scanf("%d",&digito);
    printf("número de entrada: %d \n", digito);
    printf("número invertido: %d \n", reversaDigitos(digito));
}

int reversaDigitos(int digito){

    int res, valorInvertido=0;
    while(digito>0){
        res = digito%10;
        digito=digito/10;
        valorInvertido=valorInvertido*10+res;
    }
    return valorInvertido;
}