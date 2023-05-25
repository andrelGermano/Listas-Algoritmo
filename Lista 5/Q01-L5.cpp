#include <iostream>
using namespace std;
int main(){
	int m[6][6], a, v[36], i, j, k=0;
	
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			cout << "m[" << i+1 << "][" << j+1 << "]: ";
			cin >> m[i][j];
		}
	}
	cout << "\nValor de A: ";
	cin >> a;
	cout << "\nVetor com dados atualizados: ";
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			v[k]=(m[i][j]*a);
			cout << v[k] << " ";
			k++;
		}
	}
}
