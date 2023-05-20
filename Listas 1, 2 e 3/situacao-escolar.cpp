//A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10, respectivamente, a um trabalho de laborat�rio, 
//a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o 
//Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media entre 0 e 2,9), de recupera��o (entre 3 e 4,9) 
//ou se foi aprovado.

#include <iostream>
using namespace std;

int main() {
	
	cout << "\n\t\t\t\tDigite suas respectivas notas para saber sua situa��o:\n";
	float trabalho;
	float a_semestral;
	float a_final;
	float media;
	
	cout << "\nTrabalho Laboratorial: ";
	cin >> trabalho;
	cout << "\nAvalia��o Semestral: ";
	cin >> a_semestral;
	cout << "\nAvalia��o Final: ";
	cin >> a_final;
	
	media = ((trabalho * 2) + (a_semestral * 3) + (a_final * 5))/10;
	
	if(media <= 2.9){
		cout << "\nM�dia final: " << media << "\nSitua��o final: Reprovado.";
	}else if(media == 3 || media <= 4.9){
		cout << "\nM�dia final: " << media << "\nSitua��o final: Recupera��o.";
	}else if(media == 5 || media <= 10){
		cout << "\nM�dia final: " << media << "\nSitua��o final: Aprovado.";
	}else if(media < 0 || media > 10){
		cout << "\nHouve uma irregularidade no valor de um dos exames. Verifique novamente.";
	}

	
}
