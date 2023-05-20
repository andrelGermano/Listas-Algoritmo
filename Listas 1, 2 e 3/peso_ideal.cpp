#include <iostream>
using namespace std;

int main(){
	
	cout << "\n\t\t\tPara saber seu peso ideal, digite:\n";
	
	char m;
	char f;
	int genero;
	float altura;
	float pesoM;
	float pesoF;
	
	cout << "sua altura: ";
	cin >> altura;
	cout << "seu genero (digite m para masculino e f para feminino): ";
	cin >> genero;
	
	pesoM = ((72.7 * altura) - 58);
	pesoF = ((62.1 * altura) - 44.7);
	
	if(genero == m){
		cout << "\nSeu peso ideal é " << pesoM <<"kg.";
	}else if(genero == f){
		cout << "\nSeu peso dieal é " << pesoF <<"kg.";
	}else if (genero != m && genero != f){
		cout << "\nEsse genero nao esta disponivel.";
	}
   cout << "\n\t\t\t\tFim do programa."; 
} 
