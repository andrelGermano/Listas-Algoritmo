/*. Elabore um algoritmo que leia dois n�meros inteiros, A e B, calcule e escreva o resto da divis�o de A por 
B sem usar o operador de resto (%).*/

#include <iostream>
using namespace std;

int main(){
	int a, b;
	float resto;
	
	do{
	cout << "Digite o valor de A e B, respectivamente: " << endl;
	cin >> a >> b;
	}while(a<0 || b<0);
	
	resto=(a/b * b) - a;
	
	cout << !resto;
}
