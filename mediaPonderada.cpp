#include <iostream>

int main() {
    float num1, num2, num3, num4;
    int peso1 = 1, peso2 = 2, peso3 = 3, peso4 = 4;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;

    std::cout << "Digite o quarto número: ";
    std::cin >> num4;

    float somaPonderada = (num1 * peso1) + (num2 * peso2) + (num3 * peso3) + (num4 * peso4);
    int somaPesos = peso1 + peso2 + peso3 + peso4;

    float mediaPonderada = somaPonderada / somaPesos;

    std::cout << "A média ponderada dos números é: " << mediaPonderada << std::endl;

    return 0;
}
