#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	cout << "\n\t\t\t\t\tCalculando as ra�zes da equa��o de 2o grau.";
	
	float a, b, c, delta, x1, x2;
	
	cout << "\nDigite o valor de A: ";
	cin >> a;
	
	if(a != 0){
		cout << "Digite o valor de B: ";
		cin >> b;
		cout << "Digite o valor de C: ";
		cin >> c;
		
		delta = pow(b, 2) - (4 * a * c);
		x1 = ((-b + sqrt(delta)) / (2 * a));
		x2 = ((-b - sqrt(delta)) / (2 * a));
		
		if(delta > 0){
			cout << "\nRa�zes reais: " << x1 << ", " << x2; 
		}else if(delta == 0){
			cout << "\nRa�z �nica: " << x1;
		}else if(delta < 0){
			cout << "\nN�o existe ra�z real";
		}
	}else{
		cout << "\nN�o � equa��o de segundo grau.";
	}
	cout << "\n\n\t\t\t\t\tFim de programa.\n\n\n\n\n\n";
	system("pause");
}
