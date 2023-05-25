#include <iostream>
using namespace std;
int main(){
	int m[12][13], maior=0, maiores[13], i, j;
	
	for(i=0;i<12;i++){
		for(j=0;j<13;j++){
			cout << "\nM[" << i << "][" << j << "]:";
			cin >> m[i][j];
		}
}
	for(i=0;i<12;i++){
		for(j=0;j<13;j++){
			if(m[i][j]>maior){
				maior = m[i][j];
			}
			if(j==12){
				maiores[i]=maior;
				maior=0;
			}
		}
	}
	cout << "\nMatriz modificada: " << endl;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			m[i][j]*=maiores[i];
			cout << m[i][j] << " ";
			if(j==11){
				cout << endl;
			}
		}
	}
}
