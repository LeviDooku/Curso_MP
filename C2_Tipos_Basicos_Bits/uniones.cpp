//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.6, página 37		//
//////////////////////////

#include <iostream>

using namespace std;

union Mezcla{
	int entero;
	char caracter;
};

int main(){

	Mezcla dato;

	dato.entero = 1;

	cout << "Contenido entero: " << dato.entero << endl;
	cout << "Tamaño entero: " << sizeof(dato.entero) << endl;

	cout << "Contenido caracter: " << dato.caracter << endl;
	cout << "Tamaño caracter: " << sizeof(dato.caracter) << endl;
}