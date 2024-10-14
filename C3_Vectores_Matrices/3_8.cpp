//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.8, página 56 	//
//////////////////////////

#include <iostream>

using namespace std;

void intercambia(int &a, int &b) {
        int aux = a;
        a = b;
        b = aux;
}

void ordena_burbuja(int *v, int n){
	for(int i = 0; i < n - 1; ++i){
		for(int j = 0; j < n - i - 1; ++j){
			if(*(v + j) > *(v + (j + 1)))
				intercambia(*(v + j), *(v + (j + 1)));
		}
	}
}

int mediana(int *v, int n){
	ordena_burbuja(v, n);
	return *(v + (n / 2));
} 

int main(){
	int n;

	cout << "Qué tamanio tendrá el vector?: ";
	cin >> n;
	cout << endl;
	
	int vec[n];

	for(int i = 0; i < n; i++){
		cout << "Escriba el valor #" << i << ": ";
		cin >> *(vec + i);
		cout << endl;
	}

	int vmediana = mediana(vec, n);

	cout << endl << "El vector ordenado es: [";

	for(int i = 0; i < n; i++)
		cout << vec[i] << " ";

	cout << "]" << endl;

	cout << "El valor de la mediana es: " << vmediana; 
}