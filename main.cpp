#include <iostream>
#include "palabra.h"
#include <string>


int main()

 {
     int intentos=0;
    palabra mi_palabra;
    mi_palabra.obtener_palabra();
    mi_palabra.visualizar_rayas_palabra();
    while (intentos<9){
        mi_palabra.introducir_letra();
        intentos++;
    }

    system ("pause");
}
 