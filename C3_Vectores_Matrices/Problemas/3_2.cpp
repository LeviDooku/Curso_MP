//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.2, Problemas 	//
//////////////////////////

/*
Implemente una función que reciba dos vectores ordenados y los mezcle en un tercero
NOTA: no se especifica que el tercero deba estar ordenado
*/

#include <iostream>
#include <string>
//Para los números aleatorios
#include <cstdlib>
#include <ctime>  

using namespace std;

const int MAX_TAM = 10; //El vector a evaluar tendrá este tamaño de máximo

const int MIN = 0;
const int MAX = 99;

int generar_aleatorio(int min, int max){
    return min + rand() % (max - min + 1);
}

//Como se van a rellenar vectores con números aleatorios, los vamos a ordenar primero
void ordena_insercion(int *v, int n){
    int j;
    for(int i = 0; i < n; ++i){
        int valor = v[i];
        for(j = i-1; j >= 0 && v[j] > valor; --j)
            v[j+1] = v[j];
        v[j+1] = valor;
    }
}

//Como precondición se asume que los vectores están ordenados
//Se reciben los dos vectores ordenados junto con sus respectivos tamaños y el vector para la mezcla
void mezcla_ordenados(const int *v1, const int *v2, int *v_mezcla, int n1, int n2){
    //Se copia v1
    for(int i = 0; i < n1; ++i)
        v_mezcla[i] = v1[i];

    //Se copia v2
    for(int j = 0; j < n2; ++j)
        v_mezcla[n1+j] = v2[j];
}

void escribe_vec(const string texto, int *v, int tamanio){
    cout << endl << texto << endl << "[";

    for(int i = 0; i < tamanio; ++i)
        cout << " " << v[i] << " ";
    cout << "]" << endl;
}

int main(){

    srand(time(0));

    int v1[MAX_TAM], v2[MAX_TAM];

    /*Primera versión: vectores con tamaños diferentes
    
    int n1, n2;

    cout << "Ingrese tam. v1: ";
    cin >> n1;

    cout << endl << "Ingrese tam. v1: ";
    cin >> n2;

    for(int i = 0; i < n1; ++i)
        v1[i] = generar_aleatorio(MIN, MAX);

    for(int j = 0; j < n2; ++j)
        v2[j] = generar_aleatorio(MIN, MAX);

    //Se ordenan los vectores
    ordena_insercion(v1, n1);
    ordena_insercion(v2, n2);

    int tamanio_mezcla = n1 + n2; //Tamaño del vector de la mezcla, será la suma de ambos
    int v_mezcla[tamanio_mezcla];

    mezcla_ordenados(v1, v2, v_mezcla, n1, n2);

    escribe_vec("Vector 1", v1, n1);
    escribe_vec("Vector 2", v2, n2);
    escribe_vec("Mezcla de ambos vectores", v_mezcla, tamanio_mezcla);*/

    /*Segunda versión: tamaño constante para los vectores (MAX_TAM) (más corta y entendible)*/

    for(int i = 0; i < MAX_TAM; ++i){
        v1[i] = generar_aleatorio(MIN, MAX);
        v2[i] = generar_aleatorio(MIN, MAX);
    }

    //Se ordenan los vectores
    ordena_insercion(v1, MAX_TAM);
    ordena_insercion(v2, MAX_TAM);

    int tamanio_mezcla = MAX_TAM * 2; //Tamaño del vector de la mezcla, será el doble de MAX_TAM
    int v_mezcla[tamanio_mezcla];

    mezcla_ordenados(v1, v2, v_mezcla, MAX_TAM, MAX_TAM);

    escribe_vec("Vector 1", v1, MAX_TAM);
    escribe_vec("Vector 2", v2, MAX_TAM);
    escribe_vec("Mezcla de ambos vectores", v_mezcla, tamanio_mezcla);
}