/* Calculadora IMC */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float imc, peso = 65.2, altura = 1.75;
    imc = peso / (altura * altura);

    cout << fixed << setprecision(1);
    cout << "IMC = " << imc << endl << "Status = ";

    if (imc < 18) {
        cout << "Magreza\n";

    } else if (imc >= 18 && imc <= 24.9) {
        cout << "Normal\n";

    } else if (imc >= 25 && imc <= 29.9) {
        cout << "Sobrepeso\n";

    } else if (imc >= 30 && imc <= 34.9) {
        cout << "Obesidade tipo 1\n";

    } else if (imc >= 35 && imc <= 39.9) {
        cout << "Obesidade tipo 2\n";

    } else {
        cout << "Obesidade tipo 3\n";
    }
    
    return 0;
}