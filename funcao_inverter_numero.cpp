#include <iostream>
using namespace std;


int inverterNumero(int x) {
    
    int invertido = 0;
    
    for(; x > 0; x = x / 10) {
      int digito = x % 10;
           invertido = invertido * 10 + digito;
        }
    
    return invertido;
}
 int main() {
     int numero;
     
     cout << "digite um numero inteiro: ";
     cin >> numero;
     
     cout << "numero invertido: " << inverterNumero(numero) << endl;                                                                                                                                                                 
    
     return 0;
 }

