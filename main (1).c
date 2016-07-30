#include <stdio.h>

void main()
{
    int salir=0;
    do{
        int NumeroDimensional=0, operacion=0, resultado=1;
        int vectorTam [NumeroDimensional], vectorEncontrar[NumeroDimensional] ,x=0,y=0,z=0;

    printf("*********** Tarea#1 EDD *********** \n ingrese el numero de dimensiones que tendra su arreglo:");
    scanf("%d", &NumeroDimensional);



    for(x=0; x<NumeroDimensional;x++)
    {
        printf ("Ingrese la dimension %d \n",x+1);
        scanf("%d", &vectorTam[x]);
    }
    printf("Ingrese valores para la buscar la posicion de la coordenada ");
    for(y=0; y<NumeroDimensional;y++)
    {
        printf ("\n Coordenada %d \n",y+1);
        scanf("%d", &vectorEncontrar[y]);
    }
     operacion=((vectorTam[1])*(vectorEncontrar[1]-1)+vectorEncontrar[0])-1;
     for(z=0; z<NumeroDimensional;z++){
         if(z+1==NumeroDimensional){
             vectorTam[z]=vectorEncontrar[z]-1;
         }
         resultado=vectorTam[z]*resultado;

     }
     if(NumeroDimensional>2){
         resultado=resultado+operacion;
     } else{ resultado=operacion;  }
     printf("El valor del resultado es: %d \n",resultado);
     printf("Para ejecutar otra operacion seleccione 0 \n Para salir seleccion 1 \n");
     scanf("%d",&salir);
    }while(0==salir);

}

