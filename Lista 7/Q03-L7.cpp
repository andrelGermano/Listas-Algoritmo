/*3. Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna a soma de todos os números inteiros contidos no 
intervalo [n1,n2]. Use esta função em um programa que lê n1 e n2 do usuário e imprime a soma. */
#include <iostream>
using namespace std;

int somaIntervalo (int num1, int num2);

int main(){
	int n1, n2;
	cout << "\n N1: ";
	cin >> n1;
	cout << "\n N2: ";
	cin >> n2;
	cout << "\n soma de todos os numeros inteiros contidos no intervalo [n1,n2]: " << somaIntervalo(n1+1, n2);
}
int somaIntervalo (int num1, int num2){
	int soma=0;
	do{
		soma+=num1;
		num1++;
	}while(num1<num2);
	return soma;
}
