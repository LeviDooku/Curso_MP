//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.6, Problemas 	//
//////////////////////////

/*Recibir una cadena de caracteres, una posición I y longitud L
Devolver la subcadena de longitud L que empiece en I
Si L > tam_cadena se devuelve una cadena de menor tamaño
*/

#include <iostream>

using namespace std;

const int MAXIMO = 100;

int main(){
    char c[MAXIMO];
    int I, L;
    cout << "Introduzca una frase: ";
    cin.getline(c, MAXIMO);
    cout << c;

    //No se especifica el control de estas variables I ni L.
    //Podemos filtrar para que no sean < 0 ni > 100

    cout << "Introduzca el índice de inicio de subcadena: ";
    cin >> I;

    while(I < 0 || I > 100){
        cout << "Introduzca un valor válido: ";
        cin >> I;
    }

    cout << "Introduzca la longitud de la nueva subcadena: ";
    cin >> L;

    while(L < 0 || L > 100){
        cout << "Introduzca un valor válido: ";
        cin >> L;
    }

    




}