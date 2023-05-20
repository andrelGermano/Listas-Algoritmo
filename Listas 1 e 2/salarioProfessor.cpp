// Considerações: mês de 30 dias.

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
			cout << "\nSeu salário mensal será de: " << ((12 * horasDia) * 30) << " reais por mês.\n";
		}else if(nivel == 2){
			cout << "\nSeu salário mensal será de: " << ((17 * horasDia) * 30) << " reais por mês.\n";
		}else if(nivel == 3){
			cout << "\nSeu salário mensal será de: " << ((25 * horasDia) * 30) << " reais por mês.\n";
		}	
	}else{
		cout << "\nEsse nível é inválido.\n";
	}
	
	cout << "\n\t\t\t\tFim de programa.";
}
