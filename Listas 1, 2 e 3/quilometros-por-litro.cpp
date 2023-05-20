#include <iostream>
using namespace std;

int main() {
	
	float distancia;
	float litrosGasolina;
	int quilometrosLitro;
	
	cout << "Digite a distância (em Km) que seu carro percorreu, e, em seguida, quantos litros de gasolina você usou. (Dê enter entre eles.): \n";
	cin >> distancia >> litrosGasolina;
	
	quilometrosLitro = distancia/litrosGasolina;
	
	switch(quilometrosLitro) {
		case 0: cout << "\nInválido.";
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
		case 12: cout << "\nEconômico!";
		break;
		default: cout << "\nSuper econômico!";
		break;
	}
	cout << "\n\t\t\t\t\tFim do programa\n\n\n\n\n\n\n\n\n\n\n";
	
	system("pause");
}
