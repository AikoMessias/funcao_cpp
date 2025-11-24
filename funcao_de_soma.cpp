#include <iostream>
#include <string>
using namespace std;

int somar(int a, int b){
    return a + b;
}

int main()
{
    int resultado = somar(5, 3);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
