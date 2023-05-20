//Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. 
//Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.

#include <iostream>
using namespace std;

int main(){
	int n, divisor, soma=0;
	
	cout << "Digite um número inteiro e positivo: \n";
	cin >> n;
	
	if(n>0){
		for(divisor=1;divisor<n;divisor++){
			if(n%divisor==0){
				soma = soma + divisor;
			}
		}
		if(soma == n){
			cout << "Esse número é perfeito";
		}else if(soma != n){
			cout << "Esse não é um número perfeito";
		}
	}else{
		cout << "Esse número é inválido\n";
	}
	cout << "\n\n\t\t\t\tFim de programa\n\n\n\n\n\n";
	system("pause");
}
