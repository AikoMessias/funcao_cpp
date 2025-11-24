#include <iostream>
#include <string>
using namespace std;

int dobro(int n) {
    return 2 * n;
}

int main() {
   
    int x;
    cout << "Digite um número: ";
    cin >> x;

    cout << "O dobro é: " << dobro(x) << endl;

    return 0;
}
