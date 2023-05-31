/*8. Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde 
se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e 
encontre seu elemento minimax, mostrando também sua posição. */
#include <iostream>
#include <string>
using namespace std;
int main(){
	const int tam=10;
	int m[tam][tam], i, j, linha, coluna, maior, menor;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			cout << "m[" << i << "][" << j << "]:";
			cin >> m[i][j];
		}
	}
	cout << "\nMatriz: ";
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			cout << m[i][j] << " ";
			if(j==2)
				cout << endl;
		}
	}
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i==0&&j==0)
				maior=m[i][j];
			if(m[i][j]>maior){
				maior=m[i][j];
				linha = i;
			}
		}
	}
	for(i=0;i<tam;i++){
		if(m[linha][i]<menor){
			menor=m[linha][i];
			coluna=i;
		}
	}
	cout << "\nO minimax dessa matriz e " << menor << "[" << linha << "][" << coluna << "]";
}
