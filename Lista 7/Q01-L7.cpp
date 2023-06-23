#include <iostream>
using namespace std;

int i;

float maiorNota(float nota1, float nota2);
float media(float nota1, float nota2);

int main(){
	float notaP[2], notaT[2], maioresNotas[2];
	for(i=0;i<2;i++){
		if(i==0)
			cout << "\n --- NOTAS ---";
		else{
			cout << " -------------";
		}
		cout << "\n Prova " << i+1 << ": ";
		cin >> notaP[i];
		cout << " Trab " << i+1 << ": ";
		cin >> notaT[i];
	}
	maioresNotas[0]=maiorNota(notaP[0], notaP[1]);
	maioresNotas[1]=maiorNota(notaT[0], notaT[1]);
	cout << "\n A media das duas maiores notas eh " << media(maioresNotas[0], maioresNotas[1]);
}
float maiorNota(float nota1, float nota2){
	if(nota1>nota2)
		return nota1;
	else
		return nota2;
}
float media(float nota1, float nota2){
	return (nota1+nota2)/2;
}
