//Elabore um algoritmo que leia um n�mero inteiro e uma letra (�a� � antecessores ou �s� � sucessores) e mostre a soma dos seus pr�ximos 10 antecessores ou 
//sucessores de acordo com a letra digitada.

#include <iostream>
using namespace std;

int main() {
	
	int numero;
	char letra;
	
	cout << "Digite um numero: ";
	cin >> numero;
	cout << "Digite 'a' para antecessores e 's' para sucessores: ";
	cin >> letra;
	
	if(letra == 's'){
		cout << "A soma dos seus pr�ximos 10 sucessores � " << (numero + 1) + (numero + 2) + (numero + 3) + (numero + 4) + (numero + 5) + (numero + 6) + (numero + 7) + (numero + 8) + (numero + 9) + (numero + 10);
	}else if(letra == 'a'){
		cout << "A soma dos seus pr�ximos 10 antecessores � " << (numero - 1) + (numero - 2) + (numero - 3) + (numero - 4) + (numero - 5) + (numero - 6) + (numero - 7) + (numero - 8) + (numero - 9) + (numero - 10);
	}else{
		cout << "Letra digitada � inv�lida.";
	}
}
