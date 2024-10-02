//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.5, página 39		//
//////////////////////////

#include <iostream>
#include <string>

using namespace std;

union int_double{ //No conozco como se suele llamar a esta estructura
	int entero;
	double real;
};

string convierte_bin(double& numero){
	string binario = "";

	int_double aux;
	aux.real = numero;

	int tamanio_bits = sizeof(double) * 8;

	for(int i = tamanio_bits - 1; i >= 0; i--){
		if(i % 8 == 7 && i != tamanio_bits - 1)
			binario += " ";

		if(aux.entero & (1ULL<<i)) //Si los bits están activados, se coloca un 1
			binario += "1";
		else				//En caso contrario, 0
			binario += "0";
	}

	return binario;
}

int main(){
	int_double numero;
	cout << "Introduzca un numero: ";
	cin >> numero.real;

	string binario = convierte_bin(numero.real);
	cout << endl << "El numero introducido en binario (por bytes) es: " << binario;
}