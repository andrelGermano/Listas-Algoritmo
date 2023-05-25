/*. Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores 
da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A 
(quando for igual a A, insira um 0). Mostre os resultados.*/
#include <iostream>
using namespace std;
int main(){
	int num, m[5][5], x[5][5], aux[5][5], aux2 = 0, i, j, a, iguais=0;
	cout << "\nValor A: ";
	cin >> a; 
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout << "m[" << i+1 << "][" << j+1 << "]: ";
			cin >> m[i][j];
			if(m[i][j]==a){
				iguais++;
				aux[i][j] = m[i][j];
			}
		}
	}
	cout << iguais << " valores de M são iguais a 'A'" << endl;
	cout << "\nMatriz X: " << endl;;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(aux[i][j]==m[i][j]){
				x[i][j]=0;
			}else{
				x[i][j]=m[i][j];
			}
			cout << x[i][j] << " ";
			if(j==4)
				cout << endl;
		}
	}
	
}
