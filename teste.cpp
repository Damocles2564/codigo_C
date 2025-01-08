#include <iostream>
#include <iomanip>

int main() {

    double peso, altura, imc;

    std::cout << "Digite o peso (em kg): ";
    std::cin >> peso;
    std::cout << "Digite a altura (em metros): ";
    std::cin >> altura;

    imc = peso / (altura * altura);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Seu IMC é: " << imc << std::endl;

    if (imc < 18.5) {
        std::cout << "Classificação: Abaixo do peso" << std::endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        std::cout << "Classificação: Peso normal" << std::endl;
    } else if (imc >= 25.0 && imc < 29.9) {
        std::cout << "Classificação: Sobrepeso" << std::endl;
    } else {
        std::cout << "Classificação: Obesidade" << std::endl;
    }

    return 0;
}