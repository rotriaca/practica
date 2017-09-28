#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAMSERIES 5
#define TAMCLIENTES 10

int main()
{
    eSerie serie[TAMSERIES];
    eCliente cliente[TAMCLIENTES];
    int opcion;
    do
    {
        system("cls");
        printf("**************Bienvenido a NETFLIX**************\n\n\n");
        printf("Seleccione la opcion deseada:\n\n");
        printf("1-Cargar series\n2-Mostrar series\n3-Cargar clientes\n4-Mostrar clientes\n5-Series x cliente\n");
        printf("6-Cant. clientes x serie\n7-Total clientes x serie ingresada\n8-Serie menos popular\n9-Salir\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargaSeries(serie,TAMSERIES);
            system("pause");
            break;

        case 2:
            mostrarSeries(serie,TAMSERIES);
            system("pause");
            break;

        case 3:
            cargaCliente(cliente,TAMCLIENTES);
            system("pause");
            break;

        case 4:
            mostrarClientes(cliente, TAMCLIENTES);
            system("pause");
            break;

        case 5:
            clienteSerie (cliente, serie, TAMCLIENTES, TAMSERIES);
            system("pause");
            break;
        }

    }

    while(opcion !=9);


}
