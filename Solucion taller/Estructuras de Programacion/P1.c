#include <stdio.h>
int calculaComision(int ventas);

int main (void)
{
    int ventas;
    printf("Ingrese el valor de la venta: \n");
    scanf("%d",&ventas);
    printf("El valor de comisión sera de: %d\n ",calculaComision(ventas));
}

int calculaComision(int ventas){
    int comision;
    if (ventas < 20001 ){
        comision = ventas * 0.05;
    }else if (ventas < 50001){
        comision = (ventas * 0.07) + 1000;
    }else if (ventas > 50000){
        comision = (ventas * 0.1) + 3100;
    }    
    if(comision < 0){
        return 0;      
    }
    return comision;
}