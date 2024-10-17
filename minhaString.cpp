#include "minhaString.hpp"
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

m_str::m_str() : valor{new char[1]}
{
    valor[0] = '\0'; // inicializa a string como vazia
}

m_str::~m_str()
{
    delete[] valor; // libera a memoria alocada dinamicamente
}

void m_str::setValor(const char *var)
{
    delete[] valor; // libera a memoria se ja existir um valor

    if (var)
    {
        valor = new char[strlen(var) + 1]; // aloca memoria para a nova string
        strcpy(valor, var);                // copia o valor da string passada como argumento
    }
    else
    {
        valor = new char[1]; // inicializa com uma string vazia
        valor[0] = '\0';
    }
}

const char *m_str::getValor() const
{
    return valor; // retorna o valor da string
}

// Metodo para acessar a c-string interna
const char *m_str::getCStr() const
{
    return valor; // Retorna a c-string interna
}

// verifica se a string contém apenas letras e sublinhos
bool m_str::verificaSeLetra() const
{
    for (int i = 0; valor[i] != '\0'; ++i)
    {
        // permite letras, espaços e sublinhado mas nao numeros
        if (!isalpha(valor[i]) && !isspace(valor[i]) && valor[i] != '_')
        {
            std::cerr << "Erro: A string contém caracteres não permitidos (não letras ou '_')." << std::endl;
            return false;
        }
    }
    return true;
}

// converte todos os caracteres para maiusculas
void m_str::upper()
{
    if (!verificaSeLetra())
        return; // validacao para letras

    for (int i = 0; valor[i] != '\0'; ++i)
    {
        if (islower(valor[i]))
        {
            valor[i] = toupper(valor[i]); // converte o caractere para maiusculo
        }
    }
}

// converte todos os caracteres para minusculas
void m_str::lower()
{
    if (!verificaSeLetra())
        return; // validacao para letras

    for (int i = 0; valor[i] != '\0'; i++)
    {
        if (isupper(valor[i]))
        {
            valor[i] = tolower(valor[i]); // converte o caractere para minusculo
        }
    }
}

// converte a primeira letra de cada palavra para maiuscula
void m_str::converteTitle()
{
    if (!verificaSeLetra())
        return; // validacao para letras

    bool novaP = true;
    for (int i = 0; valor[i] != '\0'; i++)
    {
        if (isspace(valor[i]))
        {
            novaP = true; // marca quando vai iniciar uma nova palavra
        }
        else if (novaP)
        {
            valor[i] = toupper(valor[i]); // converte a primeira letra para maiuscula
            novaP = false;
        }
        else
        {
            valor[i] = tolower(valor[i]); // converte o restante para minusculo
        }
    }
}

// converte a string para snake_case
void m_str::snakeCase(const std::string &frase)
{
    if (!verificaSeLetra())
        return; // validacao para letras

    for (char ch : frase)
    {
        if (isupper(ch))
        {
            std::cout << "_" << (char)tolower(ch); // converte para minusculo e adiciona "_"
        }
        else
        {
            std::cout << ch; // imprime o caractere diretamente
        }
    }
    std::cout << std::endl;
}

// converte a string para camelCase
void m_str::camelCase(const std::string &frase)
{
    if (!verificaSeLetra())
        return; // validacao para letras

    bool novaPalavra = false;
    for (char ch : frase)
    {
        if (ch == '_')
        {
            novaPalavra = true;
        }
        else if (novaPalavra)
        {
            std::cout << (char)toupper(ch);
            novaPalavra = false;
        }
        else
        {
            std::cout << (char)tolower(ch);
        }
    }
    std::cout << std::endl; // imprime uma nova linha ao final
}

// funcao para verificar se e numero e converter
double m_str::verificaEConverteNumero() const
{
    bool ponto = false; // verifica se ja tem um ponto decimal
    int n = strlen(valor);
    bool ehNumero = true;

    for (int i = 0; i < n; i++)
    {
        if (isdigit(valor[i]))
        {
            continue;
        }
        else if (valor[i] == '.')
        {
            if (ponto)
            {
                ehNumero = false; // mais de um ponto decimal
                break;
            }
            ponto = true;
        }
        else if (i == 0 && (valor[i] == '+' || valor[i] == '-'))
        {
            continue;
        }
        else
        {
            ehNumero = false;
            break;
        }
    }

    if (!ehNumero)
    {
        std::cerr << "erro: a string contem caracteres nao numericos." << std::endl;
        return 0; // retorna 0 se nao for um numero valido
    }

    if (ponto)
    {
        return atof(valor); // retorna double se houver ponto decimal
    }

    return atoi(valor); // retorna int se for um numero inteiro
}

// concatenação de strings
m_str m_str::operator+(const m_str &other) const // agora o operador + concatena corretamente as strings
{
    // calcula o tamanho total da string
    size_t newSize = strlen(valor) + strlen(other.valor) + 1; // +1 para o caractere nulo
    char *newStr = new char[newSize];                         // Aloca memoria para a nova string

    // concatena as duas strings
    strcpy(newStr, valor);
    strcat(newStr, other.valor);

    m_str result;            // cria um novo objeto m_str
    result.setValor(newStr); // define o valor concatenado
    delete[] newStr;         // libera a memória temporaria

    return result; // Retorna o novo objeto
}

// acessa um caractere especifico
char m_str::operator[](size_t pos) const // agora o operador [] vai funcioanr corretamente para o acesso
{
    if (pos >= strlen(valor))
    {
        std::cerr << "Erro: Índice fora dos limites." << std::endl;
        return '\0'; // Retorna um caractere nulo se o indice estiver fora dos limites
    }
    return valor[pos]; // retorna o caractere na posicao
}