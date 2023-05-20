#include <iostream>
using namespace std;

int main() {
	
	int idade;
	
	cout << "\nQuantos anos completos você tem? ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "\nVocê está apto a tirar sua carteira de habilitação.";
	}else if(idade > 0 && idade < 18){
		cout << "\nVocê ainda não está apto a tirar sua carteira de habilitação. O tempo que falta pra você poder tirar é " << 18 - idade << " anos."; 
	}else{
		cout << "Idade inválida.";
	}
	cout << "\n\n\t\t\t\t\tFim do programa.\n";
	system("pause");
}
