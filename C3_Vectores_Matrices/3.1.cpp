//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.5, página 35 	//
//////////////////////////

#include <iostream>

using namespace std;

void intercambio_max_min(double vec[], int &n, double &max, double &min){
	for(int i = 0; i < n; i++){
		if(vec[i] >= max)
			vec[i] = max;
		if(vec[i] <= min)
			vec[i] = min;
	}
}

int main(){

	int n;

	cout << "Qué tamanio tendrá el vector?: ";
	cin >> n;
	cout << endl;
	
	double vec[n];

	for(int i = 0; i < n; i++){
		cout << "Escriba el valor #" << i << ": ";
		cin >> vec[i];
		cout << endl;
	}

	double max, min;

	cout << "Inserte el valor máximo: ";
	cin >> max; 

	cout << endl << "Inserte el valor mínimo: ";
	cin >> min; 

	while(max <= min){
		cout << "Valores incorrectos. max NO puede ser <= min" << endl;
		
		cout << "Inserte el valor máximo: ";
		cin >> max; 

		cout << endl << "Inserte el valor mínimo: ";
		cin >> min; 
	}

	cout << endl << "Vector original: [ ";

	for(int i = 0; i < n; i++)
		cout << vec[i] << " ";

	cout << "]";

	intercambio_max_min(vec, n, max, min);

	cout << endl << "Vector modificado: [ ";

	for(int i = 0; i < n; i++)
		cout << vec[i] << " ";

	cout << "]";
}