#include <fstream>
#include <iostream>
#include "palabra.h"
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include "set_letras.h"

using namespace std;
string p;

void palabra::obtener_palabra()
{

    srand(time(NULL));
    int num = rand() % 30;
    int cont;

    ifstream datos("datos.csv");
    if (!datos.is_open())
    {
        cout << "Error al leer el archivo " << endl;
    }
    for (cont = 0; cont < num; cont++)
    {
        datos >> p;
    }

    cout << num << endl;
    cout << p;
    palabra = p;

    datos.close();
}

void palabra::visualizar_palabra()
{

    int longitud;
    int cont;

    longitud = palabra.length();

    for (cont = 0; cont < longitud; cont++)
    {

        cout << "_ ";
    }
}


void palabra::grabar_en_letras_introducidas(char letra){

    mi_set_letras.letras_introducidas=mi_set_letras.letras_introducidas+letra;

}

void palabra::validar_palabra(char letra){
int longitud_palabra, i;

longitud_palabra = palabra.length();
for(i=0;i<longitud_palabra;i++){
    if(letra==palabra[i]){

    }
        
}






}



void palabra::introducir_letra()
{
    char letra;
    int longitud;
    int cont;
    bool letra_introducida=false;

    while (letra_introducida == false)
    {
        letra_introducida=true;
        cout << "Introducir letra a jugar:" << endl;
        cin >> letra;

  
        longitud = mi_set_letras.letras_introducidas.length();

        for (cont = 0; cont < longitud; cont++)
        {
            if (letra == mi_set_letras.letras_introducidas[cont])
            {
                cout << "letra repetida vuelva a introducir otra letra: " << endl;
                letra_introducida=false;
                
            }
            
        }
        

    }

    grabar_en_letras_introducidas(letra);

    }


