//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.1, página 39		//
//////////////////////////

#include <iostream>
#include <string>

using namespace std;

string convierte_bin(unsigned char& entero){
	string binario = "";

	int tamanio_bits = sizeof(unsigned char) * 8;

	for(int i = tamanio_bits - 1; i >= 0; i--){
		if(static_cast<int>(entero) & (1<<i)) //Si los bits están activados, se coloca un 1
			binario += "1";
		else				//En caso contrario, 0
			binario += "0";
	}

	return binario;
}

int main(){

	int entero;
	cout << "Introduce un entero entre 0 y 255: ";
	cin >> entero;

	while(entero < 0 || entero > 255){
		cout << "Introduce un entero entre 0 y 255: ";
		cin >> entero;
	}

	unsigned char valor_final = static_cast<unsigned char>(entero);
	cout << valor_final << endl;

	string binario = convierte_bin(valor_final);

	cout << binario;
}