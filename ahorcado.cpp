#include<iostream>
#include <string.h>
#include<string>
#include "ahorcado.h"
#include "set_letras.h"
#include "palabra.h"

ahorcado::ahorcado(){
    miembros=0;
}


    #define FILAS 14 // Tantas FILAS como filas tienen los AHORCADOS (dibujos)
 //------------------------------------------------------------Ahorcado Fallos: 9
string ahorcado9[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||   XXXXX",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||    X X",
                         "||    X X",
                         "||   XX XX",
                         "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 8
string ahorcado8[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||   XXXXX",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||    X",
                         "||    X",
                         "||   XX",
                          "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 7
string ahorcado7[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||   XXXXX",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||  X XXX X",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};;
//------------------------------------------------------------Ahorcado Fallos: 6
string ahorcado6[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||   XXXX",
                         "||  X XXX",
                         "||  X XXX",
                         "||  X XXX",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 5
string ahorcado5[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||    XXX",
                         "||    XXX",
                         "||    XXX",
                         "||    XXX",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};;
//------------------------------------------------------------Ahorcado Fallos: 4
string ahorcado4[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||    XXX",
                         "||    XXX",
                         "||     X",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 3
string ahorcado3[FILAS]={"___________",
                         "|| /   |",
                         "||/    |",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 2
string ahorcado2[FILAS]={"___________",
                         "|| /",
                         "||/",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};;
//------------------------------------------------------------Ahorcado Fallos: 1
string ahorcado1[FILAS]={"",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                         "||",
                          "______________________________________"};
//------------------------------------------------------------Ahorcado Fallos: 0
string ahorcado0[FILAS]={"",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "______________________________________"};
   
       

 

void ahorcado::mostrar_ahorcado(){
  cout << endl;
    for(int fila=0;fila<FILAS;fila++){
        switch(miembros){
            case 0: cout << "           " << ahorcado0[fila] << endl; break;
            case 1: cout << "           " << ahorcado1[fila] << endl; break;
            case 2: cout << "           " << ahorcado2[fila] << endl; break;
            case 3: cout << "           " << ahorcado3[fila] << endl; break;
            case 4: cout << "           " << ahorcado4[fila] << endl; break;
            case 5: cout << "           " << ahorcado5[fila] << endl; break;
            case 6: cout << "           " << ahorcado6[fila] << endl; break;
            case 7: cout << "           " << ahorcado7[fila] << endl; break;
            case 8: cout << "           " << ahorcado8[fila] << endl; break;
            case 9: cout << "           " << ahorcado9[fila] << endl; break;
            default: break;
        }
    }

}


void ahorcado::anhadir_fallos(){
    
miembros++;
}