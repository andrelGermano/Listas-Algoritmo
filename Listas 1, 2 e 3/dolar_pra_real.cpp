#include <iostream>
using namespace std;

int main(){
	
	cout << "\t\t\tPara converter dolares para reais, digite:\n";
	
	float dolar;
	float cotDolar;
	
	cout << "O valor em dolar: ";
	cin >> dolar;
	cout << "Cotacao do dolar atualmente: ";
	cin >> cotDolar;
	
	cout << "\n\nEste valor em reais sera igual a " << dolar * cotDolar << " reais.";
	
	cout << "\n\n\t\t\t\tFim do programa";
}
