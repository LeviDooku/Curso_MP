//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.3, Problemas 	//
//////////////////////////

/*
Implemente una función que reciba una cadena de caracteres y la modifique para que contegenga solo la primera
palabra (si tiene más de una palabra estará separada por espacios o tabuladores)
*/

#include <iostream>

using namespace std;

const int MAXIMO = 100;

void solo_primera(char *c){
    //Recorremos el vector para encontrar donde acaba la primera palabra
    for(int i = 0; i < MAXIMO; ++i){
        if(c[i] == ' ' || c[i] == ' ') //Espacio y tabulador (cod. ASCII 32 y 9)
            c[i] = '\0'; //El caracter terminador "rompe" la cadena en la posición que necesitamos
    }
}

int main(){
    char c[MAXIMO];
    cout << "Introduzca una frase: ";
    cin.getline(c, MAXIMO);
    cout << endl << c;

    solo_primera(c);

    cout << endl << c;
}