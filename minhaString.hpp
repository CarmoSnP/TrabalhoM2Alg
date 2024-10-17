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

    // Método para acessar a c-string interna
    const char *getCStr() const;

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

    // converte inteiro em double
    double verificaEConverteNumero() const;

    // Declaração da função verificaSeLetra
    bool verificaSeLetra() const;

    // Sobrecarga do operador +
    m_str operator+(const m_str &other) const;

    // Sobrecarga do operador []
    char operator[](size_t index) const;
};