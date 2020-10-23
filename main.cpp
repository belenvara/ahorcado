#include <iostream>
#include "palabra.h"
#include <string>
#include "ahorcado.h"
#include "set_letras.h"




int main()

 {
    
     ahorcado nuestro_ahorcado;
    palabra mi_palabra(nuestro_ahorcado);
     system("cls");
     cout <<"________________________________________"<<endl;
     cout<<"           JUEGO DEL AHORCADO"<<endl;
     cout<<"========================================="<<endl;

    mi_palabra.obtener_palabra();
    mi_palabra.visualizar_rayas_palabra();       
    nuestro_ahorcado.mostrar_ahorcado();
    while (nuestro_ahorcado.miembros<9 && mi_palabra.comprobar_palabra_acertada()==false){
        mi_palabra.introducir_letra();

        system("cls");
        nuestro_ahorcado.mostrar_ahorcado();
        cout<<endl;
        mi_palabra.visualizar_palabra();
        cout<<endl;

        mi_palabra.visualizar_letras_falladas();

    }
        
        cout<<endl<<endl;
    if(mi_palabra.comprobar_palabra_acertada()==true){
       
       cout<<"FIN DE JUEGO: HAS ACERTADO"<<endl;
       cout<<"Palabra secreta:"; 
    }else {
        cout<<"FIN DE JUEGO:AHORCADO"<<endl;
    }


    system ("pause");
}
 