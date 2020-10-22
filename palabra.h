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
        void visualizar_rayas_palabra();
        void introducir_letra();
        void grabar_en_letras_introducidas(char letra);
        bool comprobar_si_letra_fallada(char letra);
        void visualizar_palabra();
        bool comprobar_palabra_acertada();

        


};


#endif