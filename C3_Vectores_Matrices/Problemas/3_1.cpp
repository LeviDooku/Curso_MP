//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.1, Problemas 	//
//////////////////////////

/*
Implemente una función que reciba un vector como entrada, y obtenga 
un nuevo vector con los elementos, sin incluir repetidos
*/

#include <iostream>
//Para los números aleatorios
#include <cstdlib>
#include <ctime>  

using namespace std;

const int MAX_TAM = 10; //El vector a evaluar tendrá este tamaño de máximo

const int MIN = 0;
const int MAX = 5;

int generar_aleatorio(int min, int max){
    return min + rand() % (max - min + 1);
}

int sin_repes(const int *entrada, int *salida){
    int k = 0;

    //Recorremos el vector de entrada
    for(int i = 0; i <  MAX_TAM; ++i){
        bool repetido = false;  //Esta variable actúa como bandera
        for(int j = 0; j < k; ++j){ //Comprobamos si el entrada[i] ya existe en salida
            if(entrada[i] == salida[j])
                repetido = true;    //Si encuentra un repetido, activamos la bandera para evitar la copia
        }
        if(!repetido){  //Si la bandera no está activa, se realiza la copia y aumentamos el tamaño de "salida"
            salida[k] = entrada[i];
            k++;
        }
    }
    return k; //k es ahora el nuevo tamaño
}

int main(){

    srand(time(0));

    int v[MAX_TAM];
    int salida[MAX_TAM];

    //Rellenar vector con números aleatorios
    for(int i = 0; i < MAX_TAM; ++i)
        v[i] = generar_aleatorio(MIN, MAX);

    cout << "Vector generado: " << endl << "[";
    for(int i = 0; i < MAX_TAM; ++i)
        cout << " " << v[i] << " ";
    cout << "]";

    int tam_salida = sin_repes(v, salida);

    cout << endl << "Nuevo sin repes: " << endl << "[";
    for(int i = 0; i < tam_salida; ++i)
        cout << " " << salida[i] << " ";
    cout << "]";
}