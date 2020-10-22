#include <iostream>
#include "palabra.h"
#include <string>


int main()

 {
     int intentos=0;
    palabra mi_palabra;
    mi_palabra.obtener_palabra();
    mi_palabra.visualizar_rayas_palabra();
    while (intentos<19 && mi_palabra.comprobar_palabra_acertada()==false){
        mi_palabra.introducir_letra();
        intentos++;
    }
cout<<"FIN JUEGO: HAS ACERTADO"<<endl;
cout<<"Palabra secreta:";
    system ("pause");
}
 