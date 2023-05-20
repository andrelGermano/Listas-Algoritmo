//A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, 
//a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação 
//Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) 
//ou se foi aprovado.

#include <iostream>
using namespace std;

int main() {
	
	cout << "\n\t\t\t\tDigite suas respectivas notas para saber sua situação:\n";
	float trabalho;
	float a_semestral;
	float a_final;
	float media;
	
	cout << "\nTrabalho Laboratorial: ";
	cin >> trabalho;
	cout << "\nAvaliação Semestral: ";
	cin >> a_semestral;
	cout << "\nAvaliação Final: ";
	cin >> a_final;
	
	media = ((trabalho * 2) + (a_semestral * 3) + (a_final * 5))/10;
	
	if(media <= 2.9){
		cout << "\nMédia final: " << media << "\nSituação final: Reprovado.";
	}else if(media == 3 || media <= 4.9){
		cout << "\nMédia final: " << media << "\nSituação final: Recuperação.";
	}else if(media == 5 || media <= 10){
		cout << "\nMédia final: " << media << "\nSituação final: Aprovado.";
	}else if(media < 0 || media > 10){
		cout << "\nHouve uma irregularidade no valor de um dos exames. Verifique novamente.";
	}

	
}
