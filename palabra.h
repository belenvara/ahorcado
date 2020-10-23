#include <string>
#include <iostream> 
#include "set_letras.h"
using namespace std;
#include "ahorcado.h"

#ifndef _palabra
#define _palabra

class palabra{

    protected:
        set_letras mi_set_letras;
        string palabra1;
        ahorcado& mi_ahorcado;
        
    public:
        void obtener_palabra();
        void visualizar_rayas_palabra();
        void introducir_letra();
        void grabar_en_letras_introducidas(char letra);
        void comprobar_si_letra_fallada(char letra);
        void visualizar_palabra();
        bool comprobar_palabra_acertada();
        palabra(ahorcado&);
        void visualizar_letras_falladas();

        


};


#endif