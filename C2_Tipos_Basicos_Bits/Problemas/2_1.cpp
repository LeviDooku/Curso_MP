//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.1, página 39		//
//////////////////////////

#include <iostream>

using namespace std;

int lee_caracter(char& caracter){
	int entero;

	if(caracter < '0' || caracter > '9')
		entero = 0;
	else 
		entero = caracter - '0';

	return entero;
}

int main(){
	char caracter;

	cout << "Introduzca un dígito del 0 al 9: ";
	cin >> caracter;

	int entero = lee_caracter(caracter);
	cout << endl << "El entero correspondiente es: " << entero << endl;

	cout << "Tamaño entero: " << sizeof(entero) << " ; Tamaño caracter: " << sizeof(caracter) << endl;
}