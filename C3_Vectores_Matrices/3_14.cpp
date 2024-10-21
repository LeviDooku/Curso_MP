//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.14, página 67	//
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

//Calcular el mínimo elemento en un vector de enteros
int minimo_vec(const int *v, int n){
    int min = v[0]; //Aunque no debería haber ningún error en no inicializar, mejor prevenir que curar
    for(int i = 1; i < n; ++i)
        if(min > v[i])
            min = v[i];
    return min;
}

//Calcular el elemento mínimo en una matriz de enteros
int minimo_matriz(const int matriz[MAX_FIL][MAX_COL]){
    return minimo_vec(matriz[0], MAX_FIL*MAX_COL);  //Una matriz no deja de ser un vector de vectores
                                                    //Se almacenan "en fila" en la memoria, de ahí el cálculo del segundo argumento
}

//Calcular el máximo entre los mínimos de cada fila (similar a minimo_vec)
int maximo_de_minimos(const int matriz[MAX_FIL][MAX_COL]){
    int max = minimo_vec(matriz[0], MAX_FIL);

    for(int i = 1; i < MAX_FIL; ++i){
        int min_fila = minimo_vec(matriz[i], MAX_FIL);
        if(max < min_fila)
            max = min_fila;
    }
    return max;
}

//Escribir una matriz, numerando sus filas y columnas
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

    int matriz[MAX_FIL][MAX_COL];

    //Rellenar la matriz con números aleatorios
    for(int i = 0; i < MAX_FIL; ++i){
        for(int j = 0; j < MAX_COL; ++j)
            matriz[i][j] = generar_aleatorio(MIN, MAX);
    }

    cout << "Matriz generada: " << endl;

    escribe_matriz(matriz);

    cout << endl << "El elemento más pequeño en la matriz es: " << minimo_matriz(matriz) << endl;

    cout << "El máximo entre los mínimos de todas las filas de la matriz es: " << maximo_de_minimos(matriz) << endl;

}
