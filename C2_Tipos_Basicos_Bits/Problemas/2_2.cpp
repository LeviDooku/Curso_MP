//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.1, página 39		//
//////////////////////////

#include <iostream>
#include <list>

using namespace std;

int main(){

	list<char> linea_texto;
	char d;

	cout << "Introduzca una frase / sucesión de caracteres: " << endl;

	while(true){
		d = cin.get();
        
        if (d == '\n'){
            break;
        }else{
            linea_texto.push_back(d);
        }
	}

	cout << "El texto introducido es: " << endl;

	for(char caracter : linea_texto)
		cout << caracter;
	
	cout << endl << "El código ASCII es: " << endl;

	for(int codigo : linea_texto)
		cout << codigo << " ";

}