/*5. Elabore um algoritmo que leia um n�mero inteiro, calcule e imprima a tabuada (o n�mero X 1 at� o 
n�mero X 10) desse n�mero at� o pr�ximo n�mero que seja m�ltiplo desse. Exemplo: se o n�mero 
digitado for 5, escreva as tabuadas do 5, 6, 7, 8, 9 e 10 (pr�ximo m�ltiplo de 5).*/
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
