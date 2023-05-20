#include <iostream>
using namespace std;

int main(){
	
	int numero, soma;
	
	cout << "Digite um n�mero de no m�ximo 5 algarismos: ";
	cin >> numero;
	
	soma = 0;
	soma = soma + ((numero % 100000) / 10000);
	soma = soma + ((numero % 10000) / 1000);
	soma = soma + ((numero % 1000) / 100);
	soma = soma + ((numero % 100) / 10);
	soma = soma + ((numero % 10) / 1);
	
	if(numero < 1 || numero > 99999){
		cout << "\nEsse n�mero � inv�lido";
	}else{
		cout << "\nA soma dos algarismos desse n�mero �: " << soma << ".";
	}
	cout << "\n\n\t\t\t\tFim do programa.";
}
