//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.10, página 58 	//
//////////////////////////

#include <iostream>

using namespace std;

//Comparador suponiendo que las cadenas tienen el mismo tamaño / tamaño establecido
bool compara_cadenas(const char cad1[], const char cad2[]){
	bool iguales;
	int i = 0;

	while(cad1[i] != '\0' && cad2[i] != '\0'){
		if(cad1[i] != cad2[i])
			iguales = false;
		++i;
	}

	if(cad1[i] == '\0' && cad2[i] == '\0')
		iguales = true;

	return iguales;
}

int main(){
	const int MAX_TAMANIO = 20;
	char cad1[MAX_TAMANIO], cad2[MAX_TAMANIO];

	cout << "Rellene la primera cadena (sin espacios): ";
	cin >> cad1;

	cout << endl << "Rellene la primera cadena (sin espacios): ";
	cin >> cad2;

	if(compara_cadenas(cad1, cad2)){
		cout << endl << "Las cadenas introducidas son iguales";
	}
	else
		cout << endl << "Las cadenas introducidas NO son iguales";
}