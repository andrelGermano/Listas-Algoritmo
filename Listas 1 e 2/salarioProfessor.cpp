// Considera��es: m�s de 30 dias.

#include <iostream>
using namespace std;

int main(){
	
	cout << "\n\t\t\t\tVamos descobrir seu salario, professor?\n";
	
	int horasDia;
	int nivel;
	
	cout << "\nDigite seu nivel (entre 1, 2 e 3): ";
	cin >> nivel;
	
	if(nivel == 1 || nivel == 2 || nivel == 3){
		cout << "\nQuantas horas inteiras voce trabalha por dia? ";
		cin >> horasDia;
		
		if(nivel == 1){
			cout << "\nSeu sal�rio mensal ser� de: " << ((12 * horasDia) * 30) << " reais por m�s.\n";
		}else if(nivel == 2){
			cout << "\nSeu sal�rio mensal ser� de: " << ((17 * horasDia) * 30) << " reais por m�s.\n";
		}else if(nivel == 3){
			cout << "\nSeu sal�rio mensal ser� de: " << ((25 * horasDia) * 30) << " reais por m�s.\n";
		}	
	}else{
		cout << "\nEsse n�vel � inv�lido.\n";
	}
	
	cout << "\n\t\t\t\tFim de programa.";
}
