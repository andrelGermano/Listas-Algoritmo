#include <iostream>
using namespace std;
int main(){
  int a[10],b[10],c[20], i;

  for(i=0;i<=9;i++){
    cout << "\nA[" << i+1 << "]: ";
    cin >> a[i];
    cout << "\nB[" << i+1 << "]: ";
    cin >> b[i];
  }
  cout << "\nVetor C: ";
  for(i=0;i<=8;i++){
    c[i]=a[i];
    c[i+1]=b[i];
    cout << c[i] << " " << c[i+1] << " ";
  }
  cout << a[9] << " " << b[9] << ".";
}
