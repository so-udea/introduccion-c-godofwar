#include<stdlib.h>
#include<stdio.h>
#include<time.h> 

int lanzar()
{
    int num;
    num=rand()%2;   
    return num;
}

void Salida(int n){

    int resultado,contC=0,contS=0;
    int i;
    for (i=0;i<n;i++){
        resultado=lanzar();
        
        if (resultado==1){
            contS++;
            printf("S");
        }
        else if(resultado==0){
            
            contC++;
            printf("C");
        }
    }
   printf(", #de caras = %d, # de sellos = %d.\n",contC,contS);
}

int main()
{
    srand(time(NULL));
    int n,continuar;
    printf("Vamos a lanzar un cara y sello\n");
    do 
    {
    printf("\nIngrese el número de lanzamientos que quiere realizar: ");
    scanf("%d",&n);
    Salida(n); 
    printf("\nSi quiere intentarlo de nuevo ingrese 1, de lo contrario ingrese otro valor: ");
    scanf("%d",&continuar);
    
    }while(continuar==1);
    
    return 0;
}