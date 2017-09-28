
typedef struct
{
    int idSerie;
    char titulo[20];
    int duracion;
    int temporadas;
} eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int serie1;
} eCliente;

void cargaSeries (eSerie series[], int);
void cargaCliente (eCliente cliente[], int);
void mostrarSeries (eSerie series[], int);
void mostrarClientes (eCliente clientes[], int);
void clienteSerie (eCliente clientes[], eSerie series[], int, int);
