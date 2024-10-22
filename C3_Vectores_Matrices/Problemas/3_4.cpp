//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.4, Problemas 	//
//////////////////////////

/*
Implemente una función que reciba una cadena de caracteres y la modifique como su inversa
*/

#include <iostream>
#include <cstring> //Para strlen() (se puede hacer también un contador, pero esto es más cómodo)

using namespace std;

const int MAXIMO = 100;

void intercambia(char &c1, char &c2){
    char aux = c1;
    c1 = c2;
    c2 = aux;
}

void inversa(char *c){
    int tamanio = strlen(c);
    for(int i = 0; i < tamanio; ++i){
        intercambia(c[i], c[tamanio - i]);
    }
}

int main(){
    char c[MAXIMO];
    cout << "Introduzca una frase: ";
    cin.getline(c, MAXIMO);
    cout << endl << c;

    inversa(c);

    cout << "La cadena inversa a la introducida es: " << endl << c;
}