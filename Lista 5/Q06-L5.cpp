#include <iostream>
using namespace std;
int main(){
	int m[10][10], aux[10][10], aux2[10], aux3[10], i, j, k, l;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cout << "\tM[" << i+1 << "][" << j+1 << "]:";
			cin >> m[i][j];
			aux[i][j]=m[i][j];
		}
	}
	cout << "\n     Matriz original: " << endl << "   ";
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cout << m[i][j] << " ";
			if(j==9)
				cout << endl << "   ";
		}
	}
	l=9;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
			k=i;
			m[i][j]=aux[k][l];
			m[k][l]=aux[i][j];
			l--;
			}
		}
	}
	cout << "\n     Matriz mudada 1: " << endl << "   ";
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cout << m[i][j] << " ";
			if(j==9)
				cout << endl << "   ";
		}
	}
	for(i=0;i<10;i++){
		aux2[i]=m[i][9];
		aux3[i]=m[4][i];
		m[i][9]=aux3[i];
		m[4][i]=aux2[i];
	}
	cout << "\n     Matriz mudada 2: " << endl << "   ";
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cout << m[i][j] << " ";
			if(j==9)
				cout << endl << "   ";
		}
	}
}
