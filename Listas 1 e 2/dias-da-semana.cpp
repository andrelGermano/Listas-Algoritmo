//Crie um programa que exibe se um dia � dia �til, fim de semana ou dia inv�lido dado o n�mero referente ao dia. Considere que domingo � o dia 1 e s�bado � o dia 7. 

#include <iostream>
using namespace std;

int main() {
	
	int dia;
	
	cout << "Digite um n�mero de 1 a 7: ";
	cin >> dia;
	
	switch(dia){
		case 1: cout << "\nDomingo";
		break;
		case 2: cout << "\nSegunda-feira.";
		break;
		case 3: cout << "\nTer�a-feira.";
		break;
		case 4: cout << "\nQuarta-feira";
		break;
		case 5: cout << "\nQuinta-feira";
		break;
		case 6: cout << "\nSexta-feira";
		break;
		case 7: cout << "\nS�bado";
		break;
		default: cout << "\nN�mero inv�lido.";
		break;
	}
	cout << "\n\t\t\t\t\t\tFim do programa\n\n\n\n\n\n\n";
	system("pause");
}
