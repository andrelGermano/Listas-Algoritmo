//Calcular o valor a ser pago por um plano de sa�de dada a idade do conveniado. Considere que todos pagam R$ 100 mais um adicional conforme a seguinte tabela: 
//� Crian�as com menos de 10 anos pagam R$80; 
//� Conveniados com idade entre 10 e 30 anos pagam R$50; 
//� Conveniados com idade entre 31 e 60 anos pagam R$ 95; 
//� Conveniados com mais de 60 anos pagam R$130. 

#include <iostream>
using namespace std;

int main() {
	
	cout << "\n\t\t\t\t\tQuanto ser� seu plano de sa�de?\n";
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if(idade > 0 && idade < 10){
		cout << "\nSeu plano de sa�de custar� R$180.";
	}else if(idade >= 10 && idade <= 30){
		cout << "\nSeu plano de sa�de custar� R$150.";
	}else if(idade >= 31 && idade <= 60){
		cout << "\nSeu plano de sa�de custar� R$195.";
	}else if(idade > 60 && idade < 100){
		cout << "\nSeu plano de sa�de custar� R$230.";
	}else{
		cout << "\nIdade inv�lida";
	}
	cout << "\n\t\t\t\t\tFim de programa\n\n\n\n\n\n";
	system("pause");
}
