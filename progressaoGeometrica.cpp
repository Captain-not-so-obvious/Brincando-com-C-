#include <iostream>
#include <cmath>

int main() {
    float primeiroTermo, razao, quintoTermo;

    std::cout << "Digite o valor do 1º termo da PG: ";
    std::cin >> primeiroTermo;

    std::cout << "Digite o valor da razão da PG: ";
    std::cin >> razao;

    quintoTermo = primeiroTermo * std::pow(razao, 5 - 1);

    std::cout << "O 5º termo da PG é: " << quintoTermo << std::endl;

    return 0;
}
