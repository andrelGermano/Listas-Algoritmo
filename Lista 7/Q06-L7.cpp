/*6.)Elaborar um algoritmo que leia um vetor de 10 posi��es de inteiros e chame uma fun��o MinMax. Esta fun��o deve receber o vetor lido e, por refer�ncia, duas vari�veis inteiras, min e max. O objetivo da fun��o � buscar os valores do menor e maior elementos do vetor e atribuir 
�s vari�veis min e max respectivamente.*/
#include <iostream>
using namespace std;
int i;
const int tam = 5;
void MinMax(int &min, int &max, int v[]);
int main(){
	int v[tam], min, max;
	for(i=0;i<tam;i++){
		cout << "\nNumero [" << i+1 << "]: ";
		cin >> v[i];
	}
	MinMax(min, max, v);
	cout << "\nMenor: " << min;
	cout << "\nMaior: " << max;
}
void MinMax(int &min, int &max, int v[]){
	min=v[0];
	max=v[0];
	for(i=0;i<tam;i++){
		if(min>v[i])
			min=v[i];
		if(max<v[i])
			max=v[i];
	}
}

