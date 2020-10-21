#include <string>
#include <iostream> 
#include "set_letras.h"
using namespace std;


#ifndef _palabra
#define _palabra

class palabra{

    protected:
        set_letras mi_set_letras;
        string palabra;
        
    public:
        void obtener_palabra();
        void visualizar_palabra();
        void introducir_letra();
        void grabar_en_letras_introducidas(char letra);
        void validar_palabra(char letra);


};


#endif