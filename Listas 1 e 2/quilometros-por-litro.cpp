#include <iostream>
using namespace std;

int main() {
	
	float distancia;
	float litrosGasolina;
	int quilometrosLitro;
	
	cout << "Digite a dist�ncia (em Km) que seu carro percorreu, e, em seguida, quantos litros de gasolina voc� usou. (D� enter entre eles.): \n";
	cin >> distancia >> litrosGasolina;
	
	quilometrosLitro = distancia/litrosGasolina;
	
	switch(quilometrosLitro) {
		case 0: cout << "\nInv�lido.";
		break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7: cout << "\nVenda o carro!";
		break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12: cout << "\nEcon�mico!";
		break;
		default: cout << "\nSuper econ�mico!";
		break;
	}
	cout << "\n\t\t\t\t\tFim do programa\n\n\n\n\n\n\n\n\n\n\n";
	
	system("pause");
}
