/*15. Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matr�culas dos 
alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usu�rio). Calcule a m�dia de 
todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a m�dia calculada. Em 
seguida, escreva as matr�culas dos alunos cujas notas foram menores do que a m�dia.  */
#include <iostream>
using namespace std;
int main(){
	int qtd, media=0, i;
	
	cout << "\nQuantos alunos? ";
	cin >> qtd;
	
	float m[qtd], n[qtd];
	
	for(i=0;i<qtd;i++){
		cout << "\nMatricula: ";
		cin >> m[i];
		cout << "\nNota: ";
		cin >> n[i];
		media += n[i];
	}
	media = media/qtd;
	cout << "\nNotas maiores que a media: ";
	for(i=0;i<qtd;i++){
		if(n[i]>media){
			cout << n[i] << "  ";
		}
	}
	cout << "\nMatriculas dos que ficaram abaixo da media: ";
	for(i=0;i<qtd;i++){
		if(n[i]<media){
			cout << m[i] << "  ";
		}
	}
}
