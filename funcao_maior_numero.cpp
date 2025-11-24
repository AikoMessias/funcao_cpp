
#include <iostream>
#include <string>
using namespace std;

int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout << "Digite dois números: ";
    cin >> x >> y;

    cout << "O maior número é: " << maior(x, y) << endl;

    return 0;
}
