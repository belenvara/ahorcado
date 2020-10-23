#include <fstream>
#include <iostream>
#include "palabra.h"
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
#include "set_letras.h"
#include "ahorcado.h"

using namespace std;
string p;

palabra::palabra(ahorcado& a):mi_ahorcado(a){
}

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

    //cout << num << endl;
    //cout << p;
    palabra1 = p;

    datos.close();
}

void palabra::visualizar_rayas_palabra()
{

    int longitud;
    int cont;

    longitud = palabra1.length();

    for (cont = 0; cont < longitud; cont++)
    {

        cout << "_ ";
    }
}

void palabra::grabar_en_letras_introducidas(char letra)
{

    mi_set_letras.letras_introducidas = mi_set_letras.letras_introducidas + letra;
   
}

void palabra::comprobar_si_letra_fallada(char letra)
{

    if (palabra1.find_first_of(letra) == -1)
    {
        mi_set_letras.letras_falladas = mi_set_letras.letras_falladas + letra;
        mi_ahorcado.anhadir_fallos();
         mi_ahorcado.mostrar_ahorcado();   
    }
}

bool palabra::comprobar_palabra_acertada(){
     int cuentaletras=0;
     int longitud_palabra;
     longitud_palabra=palabra1.length();
     int i;

for (i = 0; i < longitud_palabra; i++)
    {
        
      if (mi_set_letras.letras_introducidas.find_first_of(palabra1[i])!=-1)
       {    
            
           
           cuentaletras++;
        }
        

    }

    if(cuentaletras==longitud_palabra){
        return true;
    }
    else{
        return false;
    }


}

void palabra::visualizar_palabra()
{
    int i;
    int longitud_palabra;
    longitud_palabra=palabra1.length();

    //system("cls");
    cout<<endl;

    for (i = 0; i < longitud_palabra; i++)
    {
        
      if (mi_set_letras.letras_introducidas.find_first_of(palabra1[i])!=-1)
       {    
            
           ;
            cout << palabra1[i] << " ";
           
        }
        else
        {
            cout << "_ ";
        }
    }
        //cout<<endl;
        //cout << "Letras falladas: " << mi_set_letras.letras_falladas<<endl;
        
       
       }

       void palabra::visualizar_letras_falladas(){
        cout << "Letras falladas: " << mi_set_letras.letras_falladas;

}



void palabra::introducir_letra()
{
    char letra;
    int longitud;
    int cont;
    bool letra_introducida = false;

    while (letra_introducida == false)
    {
        letra_introducida = true;
        cout<<endl;

        cout << "Introducir letra a jugar:" << endl;
        cin >> letra;

        longitud = mi_set_letras.letras_introducidas.length();

        for (cont = 0; cont < longitud; cont++)
        {
            if (letra == mi_set_letras.letras_introducidas[cont])
            {
                cout << "letra repetida vuelva a introducir otra letra: " << endl;
                letra_introducida = false;
            }
        }
    }

    grabar_en_letras_introducidas(letra);
    //cout << "Letras introducidas " << mi_set_letras.letras_introducidas << endl;
    //system("pause");
    comprobar_si_letra_fallada(letra);
    //cout << "Letras falladas: " << mi_set_letras.letras_falladas;
    //system("pause");

     visualizar_palabra();
    //system("pause");

    
}
