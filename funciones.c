#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



void cargaSeries (eSerie series[], int tamSeries)
{
    int idSerie[]= {1, 2, 3, 4, 5};
    char titulo[][60]= {"Game of Thrones", "House of Cards", "lost", "gotham", "batman"};
    int duracion[]= {40,50,50,30,60};
    int temporadas[]= {7,5,6,3,10};

    for( int i=0; i<tamSeries ; i++)
    {

        series[i].idSerie=idSerie[i];

        strcpy(series[i].titulo,titulo[i]);

        series[i].duracion=duracion[i];

        series[i]. temporadas=temporadas[i];
    }
}

void cargaCliente (eCliente cliente[], int tamclientes)
{
    int idCliente[]= {01, 02, 03, 04, 05, 06, 07, 10, 11, 12};
    char nombre[][10]= {"Luis", "Jose", "Ana", "Laura", "Maria", "Celeste", "Juan", "Miguel", "Carla", "Andres"};
    int serie1[]= {1, 1, 2, 1, 3, 4, 4, 5, 4, 2};


    for( int i=0; i<tamclientes ; i++)
    {

        cliente[i].idCliente=idCliente[i];

        strcpy(cliente[i].nombre,nombre[i]);

        cliente[i].serie1=serie1[i];


    }
}

void mostrarSeries (eSerie series[], int TAM)
{

    for(int i=0; i<TAM ; i++)
    {
        printf("%d\t%s\t\t%d\t%d\n", series[i].idSerie, series[i].titulo,series[i].duracion,series[i].temporadas) ;
    }
}
void mostrarClientes (eCliente clientes[], int TAM)
{


    for(int i=0; i<TAM ; i++)
    {
        printf("%d\t%s\t\t%d\t\n", clientes[i].idCliente, clientes[i].nombre, clientes[i].serie1) ;

    }


}

void clienteSerie (eCliente cliente[], eSerie serie[], int TAMCLIENTES, int TAMSERIES)
{

    for(int i =0 ; i<TAMCLIENTES; i++)
    {
        printf("%s", cliente[i].nombre);

        for(int j=0; j<TAMSERIES ; j++)
        {
            if(cliente[i].serie1 = serie[j].idSerie)
            {
                puts(serie[j].titulo);
                break;
            }
        }

    }

}
