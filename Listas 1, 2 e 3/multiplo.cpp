/*5. Elabore um algoritmo que leia um número inteiro, calcule e imprima a tabuada (o número X 1 até o 
número X 10) desse número até o próximo número que seja múltiplo desse. Exemplo: se o número 
digitado for 5, escreva as tabuadas do 5, 6, 7, 8, 9 e 10 (próximo múltiplo de 5).*/
#include <iostream>
using namespace std;

int main(){
	int num, cont, cont2;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	for(cont=num;cont<=num*2;cont++){
		for(cont2=1;cont2<=10;cont2++){
			cout << cont << " X " << cont2 << " = " << cont*cont2 << endl;
		}
	}
}
