#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Escreva os valores de x, y e z, respectivamente:\n";
    cin >> x >> y >> z;
    
    if (x < y+z && y < x+z && z < x+y) {
        if (x == y && y == z) {
            cout << "\nEste e um triangulo equilatero.";
        } else if (x == y || y == z || x == z) {
            cout << "\nEste e um triangulo isosceles.";
        } else {
            cout << "\nEste e um triangulo escaleno.";
        }
    } else {
        cout << "\nOs valores nao formam um triangulo.";
    }
    
    cout << "\nFim do programa.";
}
