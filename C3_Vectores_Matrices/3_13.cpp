//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.13, página 66	//
//////////////////////////

#include <iostream>
//Para los números aleatorios
#include <cstdlib>
#include <ctime>  

using namespace std;

const int MAX_FIL = 5;
const int MAX_COL = 5;

const int MIN = 10;
const int MAX = 99;

int generar_aleatorio(int min, int max){
    return min + rand() % (max - min + 1);
}

//Traspuesta: t(i, j) = m(j, i)

void traspuesta_sin_mod(const int matriz_ori[MAX_FIL][MAX_COL], int matriz_tras[MAX_FIL][MAX_COL]){
    for(int i = 0; i < MAX_COL; ++i){
        for(int j = 0; j < MAX_FIL; ++j)
            matriz_tras[j][i] = matriz_ori[i][j]; //Simplemente se asigna siguiendo la forma de una traspuesta
    }
}

void traspuesta_mod(int matriz[MAX_FIL][MAX_COL]){
    int aux[MAX_FIL][MAX_COL];

    traspuesta_sin_mod(matriz, aux);

    for(int i = 0; i < MAX_COL; ++i){
        for(int j = 0; j < MAX_FIL; ++j)
            matriz[i][j] = aux[i][j]; 
    }
}

void escribe_matriz(const int matriz[MAX_FIL][MAX_COL]){
    //Mostrar el número de columna
    cout << "   ";
    for (int j = 0; j < MAX_COL; ++j)
        cout << "#" << j << ' '; 
    cout << endl;
    
    //Mostrar la matriz y número de fila
    for(int i = 0; i < MAX_FIL; ++i){
        cout << "#" << i << ' ';
        for(int j = 0; j < MAX_COL; ++j)
            cout << matriz[i][j] << ' ';
        cout << endl;
    }
}

int main(){
    srand(time(0));

    int matriz[MAX_FIL][MAX_COL], matriz_res[MAX_FIL][MAX_COL];

    //Rellenar la matriz con números aleatorios
    for(int i = 0; i < MAX_FIL; ++i){
        for(int j = 0; j < MAX_COL; ++j)
            matriz[i][j] = generar_aleatorio(MIN, MAX);
    }

    cout << "Matriz generada: " << endl;

    escribe_matriz(matriz);

    cout << "Matriz traspuesta (sin modoficar original): " << endl;

    traspuesta_sin_mod(matriz, matriz_res);

    escribe_matriz(matriz_res);

    cout << "Matriz traspuesta (modificando original): " << endl;

    traspuesta_mod(matriz);

    escribe_matriz(matriz);
}