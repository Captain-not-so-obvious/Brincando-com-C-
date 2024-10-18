#include <iostream>

int main() {
    float numero, tercaParte;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    tercaParte = numero / 3.0;

    std::cout << "A terça parte de " << numero << " é: " << tercaParte << std::endl;

    return 0;
}
