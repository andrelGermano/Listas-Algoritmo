/*4. Elabore um algoritmo que apresente um menu contendo as op��es 1-Tri�ngulo, 2-Quadrado, 
3Ret�ngulo, 4-Trap�zio, 5-C�rculo, 6-Sair. Em seguida, de acordo com a op��o escolhida pelo usu�rio, o 
algoritmo deve solicitar as informa��es necess�rias para c�lculo da �rea, efetuar o c�lculo e escrever o 
resultado. O algoritmo s� dever� finalizar quando o usu�rio escolher a op��o 6-Sair*/

#include <iostream>
using namespace std;

int main(){
	int resposta, B, b, h, l, r;
	
	cout << "---------------------------" << endl;
	cout << "|          MENU           |" << endl;
	cout << "---------------------------" << endl;
	cout << "|   1 - Area Triangulo    |" << endl;
	cout << "---------------------------" << endl;
	cout << "|   2 - Area Quadrado     |" << endl;
	cout << "---------------------------" << endl; 
	cout << "|   3 - Area Retangulo    |" << endl;
	cout << "---------------------------" << endl;
	cout << "|   4 - Area Trapezio     |" << endl;
	cout << "---------------------------" << endl;
	cout << "|   5 - Area Circulo      |" << endl;
	cout << "---------------------------" << endl;
	cout << "|   6 - Sair              |" << endl;
	cout << "---------------------------" << endl;
	
	do{
		do{
		cout << "\n\nSeu numero: ";
		cin >> resposta;
		}while((resposta>6) || (resposta<0));
		
		switch(resposta){
			case 1: cout << "\nDigite a base: ";
					cin >> b; 
					cout << "\nDigite a altura: "; 
					cin >> h; 
					cout << "\nA area da figura ser� igual a " << (b*h)/2 << endl;
					break;
			case 2: cout << "\nDigite o lado "; 
					cin >> l;
					cout << "\nA area da figura ser� igual a " << l*l << endl;
					break;
			case 3: cout << "\nDigite a base: ";
			        cin >> b;
			        cout << "\nDigite a altura: ";
			        cin >> h;
			        cout << "\nA area da figura ser� igual a " << b*h << endl;
			        break;
			case 4: cout << "\nDigite a base maior: ";
			        cin >> B;
			        cout << "\nDigite a base menor: ";
			        cin >> b;
			        cout << "\nDigite a altura: ";
			        cin >> h;
			        cout << "\nA area da figura ser� igual a " << ((B+b)*h)/2 << endl;
			        break;
			case 5: cout << "\nDigite o raio: ";
			        cin >> r;
			        cout << "\nA area da figura ser� igual a " << (3.14*(r*r)) << endl;
			        break;
		}
	}while(resposta!=6);
	cout << "\Fim de programa. ";
	system("pause");
}

