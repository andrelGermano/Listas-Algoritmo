#include <iostream>
using namespace std;

int main() {
	
	int idade;
	
	cout << "\nQuantos anos completos voc� tem? ";
	cin >> idade;
	
	if(idade >= 18){
		cout << "\nVoc� est� apto a tirar sua carteira de habilita��o.";
	}else if(idade > 0 && idade < 18){
		cout << "\nVoc� ainda n�o est� apto a tirar sua carteira de habilita��o. O tempo que falta pra voc� poder tirar � " << 18 - idade << " anos."; 
	}else{
		cout << "Idade inv�lida.";
	}
	cout << "\n\n\t\t\t\t\tFim do programa.\n";
	system("pause");
}
