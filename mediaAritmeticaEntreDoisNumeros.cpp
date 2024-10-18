#include <iostream>

int main() {
    float numero1, numero2, media;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    media = (numero1 + numero2) / 2.0;

    std::cout << "Média: " << media << std::endl;

    return 0;
}
