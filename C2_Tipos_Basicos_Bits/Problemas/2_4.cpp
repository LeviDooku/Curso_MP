//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.4, página 39		//
//////////////////////////

#include <iostream>
#include <string>

using namespace std;

typedef unsigned int Unit32;

string convierte_bin(Unit32& entero){
	string binario = "";

	int tamanio_bits = sizeof(Unit32) * 8;

	for(int i = tamanio_bits - 1; i >= 0; i--){
		if(i % 8 == 7 && i != tamanio_bits - 1)
			binario += " ";

		if(static_cast<int>(entero) & (1<<i)) //Si los bits están activados, se coloca un 1
			binario += "1";
		else				//En caso contrario, 0
			binario += "0";
	}

	return binario;
}

int main(){

	Unit32 entero;
	cout << "Introduzca un entero: ";
	cin >> entero;

	string binario = convierte_bin(entero);
	cout << endl << "El entero introducido en binario (por bytes) es: " << binario;

}