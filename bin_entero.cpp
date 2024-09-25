//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.5, página 35 	//
//////////////////////////

#include <iostream>
#include <string>

using namespace std;

string convierte_binario(int numero){
	string binario = ""; //Almacenaremos el número en un string

	int tamanio_bits = sizeof(int) * 8; //Tamaño de la representación

	/*
	Explicación bucle for. Ej numero = 5

	Condicional:
	
	i = 31; numero = 00000000000000000000000000000101; 1<<i = 1..0
	
	Se compara el primer 0 con el 1, como numero & (1<<i) = false, se coloca 0 (MSB)

	...

	i = 0; numero = 00000000000000000000000000000101; 1<<i = 0...1

	Se compara 1 con el 1, como numero & (1<<i) = true, se coloca (LSB)

	*/


	for(int i = tamanio_bits - 1; i >= 0; i--){
		if(numero & (1<<i)) //Si los bits están activados, se coloca un 1
			binario += "1";
		else				//En caso contrario, 0
			binario += "0";
	}

	return binario;
}

int main(){

	int n;
	cout << "Inserte un entero positivo: ";
	cin >> n;

	cout << "El número " << n << " en binario con " << sizeof(int) * 8 << " bits de precisión es: " << endl;
	string binario = convierte_binario(n);
	cout << binario;
}