#include <iostream>
using namespace std;

int main() {
	
	float celsius;
	float fahrenheit;
	
	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;
	
	fahrenheit = (9 * celsius + 160)/5;
	
	cout << "Esta temperatura em fahrenheit e igual a " << fahrenheit;
}
