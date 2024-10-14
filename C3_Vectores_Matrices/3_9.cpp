//////////////////////////
//Pedro Velasco Santana	//
//Ej 3.9, página 57 	//
//////////////////////////

#include <iostream>
#include <string>

using namespace std;

int main(){

	unsigned int num;
	const char letrasDNI[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};

	cout << "Ingrese NIF (DNI sin letra): ";
	cin >> num;

	int resto = num % 23;
	
	cout << "DNI completo: ";
	cout << num << letrasDNI[resto] << endl;
}