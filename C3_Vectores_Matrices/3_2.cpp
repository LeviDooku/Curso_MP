//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.2, página 48 	//
//////////////////////////

#include <iostream>

using namespace std;

int elimina_consecutivos(int vec[], int n){
	int i = 0;

	while(i < n){
		if(*(vec + i) == *(vec + (i+1))){
			for(int j = i; j < n; j++)
				*(vec + j) = *(vec + (j+1)); //Rodamos todos a la izq y eliminamos ultimo
			n--;
		}
		else 
			i++;
	}

	return n; //Devolvemos el nuevo tamanio
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

	cout << endl << "Vector original: [ ";

	for(int i = 0; i < n; i++)
		cout << *(vec + i) << " ";

	cout << "]";

	int nuevo_tam = elimina_consecutivos(vec, n);

	cout << endl << "Vector modificado: [ ";

	for(int i = 0; i < nuevo_tam; i++)
		cout << *(vec + i) << " ";

	cout << "]";
}