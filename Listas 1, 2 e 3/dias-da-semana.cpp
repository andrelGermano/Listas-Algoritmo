//Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente ao dia. Considere que domingo é o dia 1 e sábado é o dia 7. 

#include <iostream>
using namespace std;

int main() {
	
	int dia;
	
	cout << "Digite um número de 1 a 7: ";
	cin >> dia;
	
	switch(dia){
		case 1: cout << "\nDomingo";
		break;
		case 2: cout << "\nSegunda-feira.";
		break;
		case 3: cout << "\nTerça-feira.";
		break;
		case 4: cout << "\nQuarta-feira";
		break;
		case 5: cout << "\nQuinta-feira";
		break;
		case 6: cout << "\nSexta-feira";
		break;
		case 7: cout << "\nSábado";
		break;
		default: cout << "\nNúmero inválido.";
		break;
	}
	cout << "\n\t\t\t\t\t\tFim do programa\n\n\n\n\n\n\n";
	system("pause");
}
