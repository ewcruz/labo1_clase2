#include <stdio.h>
#include <stdlib.h>

int main()
{
   float numero;
   float maximo;
   float minimo;
   float contador;

   contador=0;

   while(numero!=-1)
   {
    printf("Ingrese un numero aqui:");
    scanf("%f",&numero);

    if(contador==0)
    {
        maximo=numero;
        minimo=numero;
    }

    if(numero>maximo)
    {
        maximo=numero;
    }
    else
    {
        if(numero<minimo&&numero!=-1)
        {
            minimo=numero;
        }

    }
    contador++;
   }

   printf("\nEl numero maximo es= %.2f",maximo);
   printf("\nEl numero minimo es= %.2f",minimo);

    return 0;
}
