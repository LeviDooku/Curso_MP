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

//Pasamos por referencia los valores a intercambiar, para modificar el valor
//apuntado por los punteros (los caracteres a intercambiar)
void intercambia(char *c1, char *c2){
    char aux = *c1;
    *c1 = *c2;
    *c2 = aux;
}

void inversa(char *c){
    int tamanio = strlen(c);
    //tamanio / 2 porque estamos trabajando con 2 caracteres en cada iteración
    for(int i = 0; i < tamanio / 2; ++i){
        intercambia(&c[i], &c[tamanio - i - 1]); //Pasamos los punteros a los valores
    }
}

int main(){
    char c[MAXIMO];
    cout << "Introduzca una frase: ";
    cin.getline(c, MAXIMO);
    cout << c;

    inversa(c);

    cout << endl << "La cadena inversa a la introducida es: " << endl << c;
}