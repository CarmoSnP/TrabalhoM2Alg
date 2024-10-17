#include "minhaString.hpp"
#include <iostream>

int main()
{
    m_str s1; // Construtor vazio

    s1.setValor("Ola, Mundo!"); // Define a string
    std::cout << "String 1: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    s1.setValor("exemplo_string");
    std::cout << "A c-string interna é: " << s1.getCStr() << std::endl; // Acesso a c-string

    std::cout << std::endl;

    s1.setValor("Nova string!"); // Redefine o valor da string
    std::cout << "String 1 modificada: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    s1.upper(); // Converte para maiúsculas
    std::cout << "String em maiusculas: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    s1.lower(); // Converte para minúsculas
    std::cout << "String em minusculas: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    s1.setValor("ola testando");
    std::cout << "string modificada: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    std::cout << "colocando a primeira letra de cada palavra em maiusculo" << std::endl;
    s1.converteTitle(); // tranformando a primeira letra de cada palavra em maiusculo
    std::cout << s1.getValor() << std::endl;

    std::cout << std::endl;

    s1.setValor("casoSnakeCase"); // Define uma nova string
    std::cout << "String 1 modificada: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    std::cout << "Transformado em snake_case:" << std::endl;
    s1.snakeCase(s1.getValor()); // Transforma em snake_case usando getValor()

    std::cout << std::endl;

    s1.setValor("camel_case");
    std::cout << "string modificada para: " << s1.getValor() << std::endl;

    std::cout << std::endl;

    std::cout << "Transforma em camelCase" << std::endl;
    s1.camelCase(s1.getValor());

    std::cout << std::endl;

    // Testando um número inteiro
    s1.setValor("123");
    std::cout << "Valor: " << s1.getValor() << std::endl;
    std::cout << "Numero convertido: " << s1.verificaEConverteNumero() << std::endl;

    std::cout << std::endl;

    // Testando um número real
    s1.setValor("45.67");
    std::cout << "Valor: " << s1.getValor() << std::endl;
    std::cout << "Numero convertido: " << s1.verificaEConverteNumero() << std::endl;

    std::cout << std::endl;

    // Testando uma string não numérica
    s1.setValor("abc123");
    std::cout << "Valor: " << s1.getValor() << std::endl;
    std::cout << "Numero convertido: " << s1.verificaEConverteNumero() << std::endl;

    std::cout << std::endl;

    s1.setValor("Hello");

    m_str s2;
    s2.setValor(" World");

    // concatenando string
    m_str s3 = s1 + s2;
    std::cout << "resultado da concatenacao: " << s3.getCStr() << std::endl;

    std::cout << std::endl;

    // acessa uma posicao determinada
    std::cout << "caractere na posicao 1: " << s3[1] << std::endl;

    std::cout << std::endl;

    s1.setValor("1");

    s2.setValor("2");

    s3 = s1 + s2;
    std::cout << "resultado da concatenacao: " << s3.getCStr() << std::endl;

    std::cout << std::endl;

    return 0;
}