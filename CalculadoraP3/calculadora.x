/*SISTEMAS DISTRIBUIDOS
ACADEMIA DE TELEMÁTICA
Archivo calculadora.x
Este archivo especifica las funciones (servicios):
suma, resta, multiplicacion y division , lo reconoceremos como el
“servidor” y se llama CALCULADORA y se identifica con el numero 0x20000003.
El número de versión se referencia con UNO, DOS, TRES Y CUATRO y cada uno tiene su valor.

El servidor exporta los servicios suma, resta, multiplicacion y division. 
Las funciones también están numeradas, de modo que suma es el servicio numero
1 y resta, es el servicio numero 2  y asi sucesivamente dentro del servidor. 
*/

struct datos
{
int a;
int b;
};

program CALCULADORA
{

version UNO
{
int suma (struct datos) = 1;
}=1;

version DOS
{
int resta (struct datos) = 2;
}=2;

version TRES
{
int multiplicacion (struct datos) = 3;
}=3;

version CUATRO
{
int division (struct datos) = 4;
}=4;

} = 0x20000003;
