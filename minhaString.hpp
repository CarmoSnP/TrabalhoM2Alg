#pragma once

#include <string>

class m_str
{
private:
    char *valor;

public:
    // Construtor
    m_str();

    // Destrutor
    ~m_str();

    // Seta o valor da string
    void setValor(const char *var);

    // Obtém o valor da string
    const char *getValor() const;

    // Converte todos os caracteres para maiúsculas
    void upper();

    // Converte todos os caracteres para minúsculas
    void lower();

    // Converte a primeira letra de cada palavra para maiúscula
    void converteTitle();

    // Converte a string para snake_case
    void snakeCase(const std::string &frase);

    // coverte a strinf para camelcase
    void camelCase(const std::string &frase);
};