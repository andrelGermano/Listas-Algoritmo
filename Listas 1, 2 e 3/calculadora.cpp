#include <iostream>
using namespace std;

int main(){
	
	float numero, resultado;
	char operacao;
	
	cout << "\nNumero: ";
	cin >> numero;
	resultado = numero;
	
	do{
		cout << "\nOperacao: ";
		cin >> operacao;
		if(operacao != '='){
			cout << "\nNumero: ";
	        cin >> numero;	
			switch(operacao){
				case '+': resultado = resultado + numero; break;
				case '-': resultado = resultado - numero; break;
				case '/': resultado = resultado / numero; break;
				case '*': resultado = resultado * numero; break;
			}
		}
		
	}while(operacao != '=');
	cout << "\n\nResultado: " << resultado;
}
