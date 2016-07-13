/*
*	Una persona compra 3 articulos de diferentes precios. Calcule el total comprado e imprima el resultado.
*	Programado por Alejandro Vazquez del Mercado .. 13 Julio 2016.
*	Contacto: alejandrovazquez.dev@gmail.com || alejandro@lineium.com   
*/

// Declaracion de Librerías.
#include <iostream>

using namespace std;

// Declaracino de Variables.
float a1, a2, a3, suma;

// Metodo main.
int main() {

	cout << "Captura los precio de los articulos comprados: \n";
	cout << "Articulo 1: "; cin >> a1;
	cout << "Articulo 2: "; cin >> a2;
	cout << "Articulo 3: "; cin >> a3;

	suma = a1 + a2 + a3;

	cout << "Total comprado: " << suma << " pesos" << endl;
	cout << "Presiona una tecla para finalizar\n";
	getchar();

	return 1;
}