#include <iostream>
using namespace std;

int main() {
    int quantidade;
    double preco_unitario;

    // DIGITE A QUANTIDADE DE SORVETES COMPRADOS ENTRE AS ASPAS
    cout << " 0 ";
    cin >> quantidade;

    if (quantidade <= 25) {
        preco_unitario = 1.50;
    }
    else {
        preco_unitario = 1.25;
    }

    double total = quantidade * preco_unitario;
    cout << "O total a pagar é: R$" << total << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // DIGITE UM NUMERO 
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (numero > 10) {
        numero = numero + 10 * 2;
    }
    else {
        numero = numero + 9 * 3 - 8;
    }

    cout << "Resultado: " << numero << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O número é positivo." << endl;
    }
    else if (numero < 0) {
        cout << "O número é negativo." << endl;
    }
    else {
        cout << "O número é zero." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O primeiro número é maior." << endl;
    }
    else if (num2 > num1) {
        cout << "O segundo número é maior." << endl;
    }
    else {
        cout << "Os números são iguais." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    //DIGITE AS NOTAS 
    double nota1, nota2;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    double media = (nota1 + nota2) / 2;
    cout << "A média é: " << media << endl;

    if (media >= 7) {
        cout << "Aprovado" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}

