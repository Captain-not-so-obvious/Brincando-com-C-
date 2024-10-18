#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    std::cout << "O antecessor de " << numero << " é: " << numero - 1 << std::endl;

    return 0;
}
