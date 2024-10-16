#include "minhaString.hpp"
#include <iostream>

int main()
{
    m_str s1; // Construtor vazio

    s1.setValor("Ola, Mundo!"); // Define a string
    std::cout << "String 1: " << s1.getValor() << std::endl;

    s1.setValor("Nova string!"); // Redefine o valor da string
    std::cout << "String 1 modificada: " << s1.getValor() << std::endl;

    s1.upper(); // Converte para maiúsculas
    std::cout << "String em maiusculas: " << s1.getValor() << std::endl;

    s1.lower(); // Converte para minúsculas
    std::cout << "String em minusculas: " << s1.getValor() << std::endl;

    s1.setValor("ola testando");
    std::cout << "string modificada: " << s1.getValor() << std::endl;

    std::cout << "colocando a primeira letra de cada palavra em maiusculo" << std::endl;
    s1.converteTitle(); // tranformando a primeira letra de cada palavra em maiusculo
    std::cout << s1.getValor() << std::endl;

    s1.setValor("casoSnakeCase"); // Define uma nova string
    std::cout << "String 1 modificada: " << s1.getValor() << std::endl;

    std::cout << "Transformado em snake_case:" << std::endl;
    s1.snakeCase(s1.getValor()); // Transforma em snake_case usando getValor()

    s1.setValor("camel_case");
    std::cout << "string modificada para: " << s1.getValor() << std::endl;

    std::cout << "Transforma em camelCase" << std::endl;
    s1.camelCase(s1.getValor());

    return 0;
}