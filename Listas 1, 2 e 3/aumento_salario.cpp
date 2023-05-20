#include <iostream>
using namespace std;

int main(){
	
	float salario;
	int codigo;
	
	cout << "Digite quanto voce ganha: ";
	cin >> salario;
	cout << "Qual o seu codigo? ";
	cin >> codigo;
	
	if(codigo == 101){
		cout << "\nNovo salario: " << (salario + (salario * 0.1));
		cout << "\nSalario antigo: " << salario;
		cout << "\nDiiferen�a entre eles: " << (salario - (salario * 0.1));	
	}else if(codigo == 102){
		cout << "\nNovo salario: " << (salario + (salario * 0.2));
		cout << "\nSalario antigo: " << salario;
		cout << "\nDiiferen�a entre eles: " << (salario - (salario * 0.2));
	}else if(codigo == 103){
		cout << "\nNovo salario: " << (salario + (salario * 0.3));
		cout << "\nSalario antigo: " << salario;
		cout << "\nDiiferen�a entre eles: " << (salario - (salario * 0.3));
	}else{
		cout << "\nNovo salario: " << (salario + (salario * 0.4));
		cout << "\nSalario antigo: " << salario;
		cout << "\nDiiferen�a entre eles: " << (salario + (salario * 0.4));
	}
	
	cout << "\n\t\t\tFim de programa.";  
	
}
