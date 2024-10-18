#include <iostream>

int main() {
    int numero1, numero2, produto;

    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> numero2;

    produto = numero1 * numero2;

    std::cout << "O produto de " << numero1 << " e " << numero2 << " é: " << produto << std::endl;

    return 0;
}
