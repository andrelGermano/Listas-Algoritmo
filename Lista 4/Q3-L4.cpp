/*Elabore um algoritmo que leia um vetor de 15 posi��es de n�meros inteiros e pergunte ao usu�rio quais 
elementos ele deseja ver: se os elementos que est�o em �ndices pares ou se os elementos que est�o em 
�ndices �mpares. Mostre somente os elementos solicitados.*/

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
