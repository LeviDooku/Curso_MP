//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.6, Problemas 	//
//////////////////////////

/*Recibir una cadena de caracteres, una posición I y longitud L
Devolver la subcadena de longitud L que empiece en I
Si L > tam_cadena se devuelve una cadena de menor tamaño
*/

#include <iostream>
#include <cstring>

using namespace std;

const int MAXIMO = 100;

void acorta_cadena(int I, int L, char *c, char *cad_mod, int n){
    //Primero controlamos si L es un valor correcto
    //Si L es mayor o igual a n, vamos a devolver la cadena a la mitad,
    if(L - n >= 0){
        for(int i = 0; i < n/2; ++i)
            cad_mod[i] = c[i];
        cad_mod[n / 2] = '\0'; //Caracter terminador
    }
    else{
        for(int j = 0; j < L; ++j)
            cad_mod[j] = c[I+j]; //Copiamos desde el índice seleccionado
        cad_mod[L] = '\0'; //Caracter terminador
    }
}

int main(){
    char c[MAXIMO], cad_mod[MAXIMO];
    int I, L;
    cout << "Introduzca una frase: ";
    cin.getline(c, MAXIMO);
    int n = strlen(c);
    cout << "La cadena introducida es: " << c << endl;
    cout << "El tamaño de la cadena es: " << n << endl;

    cout << "Introduzca el índice de inicio de subcadena: ";
    cin >> I;

    while(I < 0 || I > n){
        cout << "Introduzca un valor válido: ";
        cin >> I;
    }

    //No se especifica el control de L.
    //Podemos filtrar para que no sean < 0 ni > 100

    cout << "Introduzca la longitud de la nueva subcadena: ";
    cin >> L;

    while(L < 0 || L > 100){
        cout << "Introduzca un valor válido: ";
        cin >> L;
    }

    acorta_cadena(I, L, c, cad_mod, n);

    cout << endl << "Nueva cadena modificada: " << cad_mod;
}