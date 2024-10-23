//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.5, Problemas 	//
//////////////////////////

/*Comprobar si una cadena de caracteres es palíndromo
Se derán eliminar acentos, separación de palabras y convertir mayúsculas a minúsculas
*/

#include <iostream>
#include <cstring> //Para strlen() (se puede hacer también un contador, pero esto es más cómodo)
#include <cctype>  //Para tolower() y isalpha() e isdigit()

using namespace std;

const int MAXIMO = 100;

//Eliminar espacios en blanco trabajando con un nuevo índice.
void elimina_separaciones(char *c){
    int i = 0; //Índice original
    int j = 0; //Índice modificado

    while(c[i] != '\0'){ //Recorremos la cadena
        if(c[i] != ' ' || c[i] != ' '){ //Si el caracter no es una separación, lo copiamos
            c[j] = c[i];
            j++; //Se actualiza el índice
        }
        i++; //Se actualiza el índice
    }
    c[j] = '\0'; //Añadimos caracter terminador en nueva posición
}

//Convertir las mayus a minus usando la función tolower() (se puede hacer usando ASCII tmb)
void convierte_minus(char *c){
    int i = 0;
    while(c[i] != '\0'){
        c[i] = tolower(c[i]);
        i++;
    }
}

//Eliminar caracteres especiales y solo quedarnos con letras y números.
void elimina_especiales(char *c){
    int i = 0; //Índice actual
    int j = 0; //Nuevo índice

    while (c[i] != '\0') {
        char actual = c[i];

        //Eliminar caracteres especiales
        if (isalpha(actual) || isdigit(actual)){
            c[j] = actual;
            j++;
        }
        i++;
    }
    c[j] = '\0'; //Terminamos la cadena en el nuevo índice
}

//Función para conseguir una cadena con la que se pueda trabajar
void limpiar_cadena(char *c){
    //Eliminar espacios
    elimina_separaciones(c);

    //Convierte a minúscula
    convierte_minus(c);

    //Elimina caracteres especiales
    elimina_especiales(c);
}

int main(){
    char c[MAXIMO];
    cout << "Introduzca una frase SIN ACENTOS: ";
    cin.getline(c, MAXIMO);
    cout << c;

    limpiar_cadena(c);

    cout << endl << c;
}
