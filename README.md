Trabalho 2: Implementação de uma Classe MinhaString
Algoritmos e Programação II
Universidade: UNIVALI
Professor: Evandro C. R. Rosa

Objetivo
Este projeto tem como objetivo implementar uma classe MinhaString que encapsula uma c-string e fornece métodos para manipulação de strings. O trabalho visa avaliar o uso de classes, alocação dinâmica e ponteiros, sem utilizar a biblioteca std::string ou qualquer outra classe que abstraia a alocação dinâmica.

Especificações da Classe MinhaString
Construtor
Deve permitir a criação de uma string vazia ou a partir de uma cadeia de caracteres (const char*). A memória necessária deve ser alocada dinamicamente no construtor.

Destrutor
Deve liberar a memória alocada para a string ao final da vida útil do objeto, evitando vazamentos de memória.

Método de concatenação
Modifica a string atual, aceitando como entrada uma instância de MinhaString ou const char*. Pode ser necessário alocar mais memória para realizar a concatenação.

Métodos de alteração de caracteres

upper(): Converte todos os caracteres para maiúsculas.
lower(): Converte todos os caracteres para minúsculas.
title(): Converte a primeira letra de cada palavra para maiúscula e as restantes para minúsculas.
snake_case(): Converte uma string no formato CamelCase para snake_case.
camelCase(): Converte uma string de snake_case para CamelCase.
Métodos para verificação e conversão de números

Verifica se a string representa um número (inteiro ou real).
Retorna o número (int ou double) armazenado na string. Se não for um número, retorna 0.
Acesso à C-String Interna
Permite retornar a c-string interna para utilização no cout, sem permitir modificações a partir dela.

Implementação e Teste
A classe MinhaString deve ser instanciada e utilizada em um programa de teste que avalie todos os métodos implementados.

Requisitos Opcionais (Pontos Extras)
São oferecidos pontos extras pela implementação dos seguintes requisitos opcionais:

Separar a implementação em minhaString.hpp, minhaString.cpp, e main.cpp.
Sobrecarga do operador + para concatenar strings.
Sobrecarga do operador [] para acessar caracteres específicos da string.
Permitir que a MinhaString seja utilizada com cout.
Avaliação
A avaliação será realizada por meio de defesa de código, onde os alunos deverão explicar como a implementação foi feita. O projeto pode ser realizado em equipes de até três pessoas, e a nota individual dependerá das respostas fornecidas durante a defesa.
