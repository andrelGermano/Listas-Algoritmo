//Dado um n�mero n inteiro e positivo, dizemos que n � perfeito se n for igual � soma de seus divisores positivos diferentes de n. 
//Construa um programa em C que verifica se um dado n�mero � perfeito. Ex: 6 � perfeito, pois 1+2+3 = 6.

#include <iostream>
using namespace std;

int main(){
	int n, divisor, soma=0;
	
	cout << "Digite um n�mero inteiro e positivo: \n";
	cin >> n;
	
	if(n>0){
		for(divisor=1;divisor<n;divisor++){
			if(n%divisor==0){
				soma = soma + divisor;
			}
		}
		if(soma == n){
			cout << "Esse n�mero � perfeito";
		}else if(soma != n){
			cout << "Esse n�o � um n�mero perfeito";
		}
	}else{
		cout << "Esse n�mero � inv�lido\n";
	}
	cout << "\n\n\t\t\t\tFim de programa\n\n\n\n\n\n";
	system("pause");
}
