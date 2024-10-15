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

/*void traspuesta_sin_mod(const int **original, int **traspuesta){

}

void traspuesta_mod(int **original){

}*/

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
}