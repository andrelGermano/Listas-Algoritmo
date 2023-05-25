/*Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz. 
a) da linha 4 de M 
b) da coluna 2 de M 
c) da diagonal principal 
d) da diagonal secundária 
e) de todos os elementos da matriz M 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 */
#include <iostream>
using namespace std;
int main(){
	int m[5][5], i, j, somLi4=0, somCo2=0, somDiP=0, somDiS=0, somTot=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout << "M[" << i << "][" << j << "]: ";
			cin >> m[i][j];
			somTot+=m[i][j];
		}
	}
	cout << "\nMatriz: " << endl;
	for(i=0;i<5;i++){
		for(j=0;j<=4;j++){
			if(i==4)
				somLi4+=m[i][j];
			if(j==2)
				somCo2+=m[i][j];
			if(i==j)
				somDiP+=m[i][j];
			cout << m[i][j] << " ";
			if(j==4)
				cout << endl;
		}
	}
	for(i=4;i>=0;i--){
		for(j=0;j<=4;j++){
			if(j==i)
			somDiS=somDiS+m[i][j];
		}
	}
	cout << "\nSoma da linha 4 de M: " << somLi4 << "\nSoma da coluna 2 de M: " << somCo2 << "\nSoma da diagonal principal: " << somDiP << "\nSoma da diagonal secundária: " << somDiS << "\nSoma de todos os elementos da matriz M: " << somTot;
}
