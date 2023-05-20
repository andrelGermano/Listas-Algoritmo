/*Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicitados.*/

#include <iostream>
using namespace std;

int main(){
	int vet[15], i;
	char resposta; 
	
	for(i=0;i<=14;i++){
		cout << "\digite o numero: ";
		cin >> vet[i];
	}
	do{
		cout << "\ndigite p para pares e i para impares: ";
		cin >> resposta;
	}while((resposta!='p')&&(resposta!='i'));
	for(i=0;i<=14;i++){
		if(resposta=='p'){
			while(vet[i]%2==0){
				cout << vet[i] << " ";
				vet[i]++;
			}
		}else{
			while(vet[i]%2!=0){
				cout << vet[i] << " ";
				vet[i]++;
			}
		}
	}
}
