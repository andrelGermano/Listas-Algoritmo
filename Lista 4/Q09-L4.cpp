/*Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P
= [2 4]. */
#include <iostream>
using namespace std;

int main (){
  int a[10], p[10], i, i2=0;
  
  for(i=0;i<=9;i++){
	cout << "\nNumero: ";
	cin >> a[i];
  }
  for(i=0;i<=9;i++){
  	if(a[i]%2==0){
  		p[i2]=i;
  		cout << "P = " << p[i] << " ";  
  		i2++;
	}
  }
}
