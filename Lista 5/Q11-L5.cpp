/*11. Elabore um algoritmo que leia uma matriz MxN, verifique e escreva as coordenadas (linha e coluna) do maior 
e do menor elementos.*/
#include <iostream>
using namespace std;
int main(){
	int i, j, m, n, maior=0, menor=100000000, iMai, jMai, iMen, jMen;
	
	cout << "\n Valor de i: ";
	cin >> m;
	cout << "\n Valor de j: ";
	cin >> n;
	int M[m][n];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << "\nM[" << i << "][" << j << "]: ";
			cin >> M[i][j];
			if(M[i][j]>maior){
				maior=M[i][j];
				iMai=i;
				jMai=j;
			}
			if(M[i][j]<menor){
				menor=M[i][j];
				iMen=i;
				jMen=j;
			}
		}
	}
	cout << "\n 'i' do maior elemento: " << iMai << " / 'j' do maior elemento: " << jMai;
	cout << "\n 'i' do menor elemento: " << iMen << " / 'j' do menor elemento: " << jMen;
}
