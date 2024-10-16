# 💻 Trabalho 2: Implementação de uma Classe `MinhaString`

**Disciplina:** Algoritmos e Programação II  
**Universidade:** UNIVALI  
**Professor:** Evandro C. R. Rosa

---

## 🎯 Objetivo

O objetivo deste projeto é implementar uma classe `MinhaString` que encapsula uma `c-string` e oferece métodos para manipulação de strings, avaliando o uso de classes, alocação dinâmica e ponteiros.

⚠️ **Atenção:** Não é permitido o uso de `std::vector`, `std::string` ou qualquer classe que abstraia a alocação dinâmica.

---

## 📋 Especificações da Classe `MinhaString`

### 🔧 Funcionalidades obrigatórias:

1. **Construtor**

   - Criação de uma string vazia ou a partir de uma cadeia de caracteres (`const char*`).
   - A memória necessária deve ser alocada dinamicamente.

2. **Destrutor**

   - Liberação da memória alocada ao final da vida útil do objeto, sem vazamentos.

3. **Método de Concatenação**

   - Modifica a string atual e aceita como entrada outra instância de `MinhaString` ou `const char*`.
   - Pode ser necessário realocar memória.

4. **Métodos de Alteração de Caracteres**

   - `upper()`: Converte todos os caracteres para maiúsculas.
   - `lower()`: Converte todos os caracteres para minúsculas.
   - `title()`: Primeira letra de cada palavra maiúscula, o restante minúsculo.
   - `snake_case()`: Converte CamelCase para snake_case.
   - `camelCase()`: Converte snake_case para CamelCase.

5. **Verificação e Conversão de Números**

   - Verifica se a string representa um número (inteiro ou real).
   - Retorna o número (int ou double). Se não for um número, retorna `0`.

6. **Acesso à C-String Interna**
   - Permite retornar a `c-string` interna para uso com `cout`, mas não pode ser modificada externamente.

---

## 🛠️ Implementação e Testes

A classe `MinhaString` deve ser instanciada e testada em um programa que valide todas as suas funcionalidades.

---

## 💡 Requisitos Opcionais (Pontos Extras)

Você pode ganhar pontos extras ao implementar os seguintes itens:

- 🔀 **Separação de código**: Dividir a implementação em arquivos: `minhaString.hpp`, `minhaString.cpp` e `main.cpp`.
- ➕ **Sobrecarga do operador `+`**: Para concatenar strings.
- 🆔 **Sobrecarga do operador `[]`**: Para acessar caracteres específicos da string.
- 📤 **Compatibilidade com `cout`**: Permitir que `MinhaString` seja utilizada diretamente com `cout`.

---

## 📝 Avaliação

- O trabalho pode ser feito em equipes de até **3 pessoas**.
- A avaliação será realizada por **defesa de código**, onde cada integrante deve explicar partes específicas da implementação.
- A nota de cada aluno será individual, baseada nas respostas fornecidas durante a defesa.

---

## 📌 Instruções para Compilação

1. Clone o repositório:

   ```bash
   git clone https://github.com/seu-usuario/seu-repositorio.git

   ```

2. Compiler o código:

   ```bash
   g++ -o programa main.cpp minhaString.cpp -std=c++11

   ```

3. Execute o programa:
   ```bash
   ./programa
   ```

## 🏆 Pontuação Extra

- Ao implementar corretamente os requisitos opcionais e apresentar uma defesa clara, sua equipe poderá ganhar pontos extras! Certifique-se de seguir todas as orientações e testar exaustivamente o código.

## 📚 Referências

- Documentação oficial C++: https://en.cppreference.com/w/
  Regras da disciplina Algoritmos e Programação II: Material fornecido pelo professor.

## 🌟 Boa sorte e bons estudos! 🌟
