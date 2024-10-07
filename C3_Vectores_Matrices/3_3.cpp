//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.3, página 49 	//
//////////////////////////

#include <iostream>

using namespace std;

int cuenta_pares(const int vec[], int n){
	int contador_par = 0;

	for(int i = 0; i < n; i++){
		if(*(vec + i) % 2 == 0)
			contador_par++;
	}

	return contador_par;	
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

	int num_pares = cuenta_pares(vec, n);

	cout << endl << "El número de pares que contiene el vector es de: " << num_pares;
}