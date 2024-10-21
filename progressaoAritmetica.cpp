#include <iostream>

int main() {
    float primeiroTermo, razao, decimoTermo;

    std::cout << "Digite o valor do 1º termo da PA: ";
    std::cin >> primeiroTermo;

    std::cout << "Digite o valor da razão da PA: ";
    std::cin >> razao;

    decimoTermo = primeiroTermo + (10 - 1) * razao;

    std::cout << "O 10º termo da PA é: " << decimoTermo << std::endl;

    return 0;
}
