// fazer a verificacao de se eh inteiro double ou string de letras em cada funcao, para acessar so em funcoes corretas
#include "minhaString.hpp"
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

m_str::m_str() : valor{new char[1]}
{
    valor[0] = '\0'; // Inicializa a string como vazia
}

m_str::~m_str()
{
    delete[] valor; // Libera a memória alocada dinamicamente
}

void m_str::setValor(const char *var)
{
    delete[] valor; // Libera a memória se já existir um valor

    if (var)
    {
        valor = new char[strlen(var) + 1]; // Aloca memória para a nova string
        strcpy(valor, var);                // Copia o valor da string passada como argumento
    }
    else
    {
        valor = new char[1]; // Inicializa com uma string vazia
        valor[0] = '\0';
    }
}

const char *m_str::getValor() const
{
    return valor; // Retorna o valor da string
}

// Converte todos os caracteres para maiúsculas
void m_str::upper()
{
    for (int i = 0; valor[i] != '\0'; ++i)
    {
        if (islower(valor[i]))
        {
            valor[i] = toupper(valor[i]); // Converte o caractere para maiúsculo
        }
    }
}

// Converte todos os caracteres para minúsculas
void m_str::lower()
{
    for (int i = 0; valor[i] != '\0'; i++)
    {
        if (isupper(valor[i]))
        {
            valor[i] = tolower(valor[i]); // Converte o caractere para minúsculo
        }
    }
}

// Converte a primeira letra de cada palavra para maiúscula
void m_str::converteTitle()
{
    bool novaP = true;
    for (int i = 0; valor[i] != '\0'; i++)
    { // Percorre até o final da c-string
        if (isspace(valor[i]))
        {
            novaP = true; // Marca qunando vai iniciar uma nova palavra
        }
        else if (novaP)
        {
            valor[i] = toupper(valor[i]); // converte a primeira letra para maiúsculo
            novaP = false;
        }
        else
        {
            valor[i] = tolower(valor[i]); // converte o restante para minúsculo
        }
    }
}

// Converte a string para snake_case
void m_str::snakeCase(const std::string &frase)
{
    for (char ch : frase)
    {
        if (isupper(ch))
        {
            std::cout << "_" << (char)tolower(ch); // Converte para minúsculo e adiciona "_"
        }
        else
        {
            std::cout << ch; // Imprime o caractere diretamente
        }
    }
    std::cout << std::endl;
}

void m_str::camelCase(const std::string &frase)
{
    // Itera por cada caractere na string de entrada
    for (char ch : frase)
    {
        if (isupper(ch))
        {
            std::cout << "_" << (char)tolower(ch); // Converte para minúsculo e adiciona "_"
        }
        else
        {
            std::cout << ch; // Imprime o caractere diretamente
        }
    }
    std::cout << std::endl; // Imprime uma nova linha ao final
}