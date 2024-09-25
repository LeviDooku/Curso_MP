//////////////////////////
//Pedro Velasco Santana	//
//Ej 2.4, página 33 	//
//////////////////////////

#include <iostream>
using namespace std;

int main(){

	short int drcha = 1; //Después de la primera iteración estará siempre a 0
	unsigned int izq = 1; //Para evitar el desbordamiento
	const int tamanio_int = sizeof(int);
	const int bits = 8; //Para convertir bytes a bits
	int contador = 0;

	while(contador < tamanio_int * bits){
		cout << "Desplazamiento derecha #" << contador << " =" << drcha << endl;
		cout << "Desplazamiento izquierda #" << contador << " =" << izq << endl;

		drcha >>= 1;
		izq <<= 1;

		contador++;
	}
}