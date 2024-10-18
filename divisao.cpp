#include <iostream>

int main() {
    int dividendo, divisor, quociente, resto;

    std::cout << "Digite o dividendo (número a ser dividido): ";
    std::cin >> dividendo;

    std::cout << "Digite o divisor (número que divide): ";
    std::cin >> divisor;

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    std::cout << "Dividendo: " << dividendo << std::endl;
    std::cout << "Divisor: " << divisor << std::endl;
    std::cout << "Quociente: " << quociente << std::endl;
    std::cout << "Resto: " << resto << std::endl;

    return 0;
}
