<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>README - MinhaString</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f4f4f4;
      color: #333;
      line-height: 1.6;
      margin: 0;
      padding: 0 20px;
    }
    h1, h2, h3 {
      color: #5D5C61;
    }
    h1 {
      font-size: 2.5em;
      text-align: center;
      margin-top: 30px;
    }
    h2 {
      font-size: 1.8em;
      margin-bottom: 10px;
    }
    h3 {
      font-size: 1.4em;
      margin-top: 30px;
    }
    p {
      margin: 10px 0;
    }
    ul {
      margin-left: 20px;
    }
    ul li {
      margin: 5px 0;
    }
    code {
      background-color: #f4f4f4;
      padding: 2px 5px;
      border-radius: 3px;
      font-family: monospace;
    }
    .container {
      background-color: white;
      padding: 20px;
      border-radius: 10px;
      box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
      max-width: 800px;
      margin: 50px auto;
    }
    .header {
      text-align: center;
      margin-bottom: 40px;
    }
    .header h1 {
      color: #379683;
    }
    .section-title {
      color: #05386B;
      border-bottom: 2px solid #379683;
      padding-bottom: 5px;
      margin-bottom: 20px;
    }
    .optional {
      background-color: #d1ecf1;
      color: #0c5460;
      padding: 10px;
      border-left: 5px solid #0c5460;
      margin-top: 20px;
    }
    footer {
      text-align: center;
      margin-top: 50px;
      color: #888;
    }
  </style>
</head>
<body>

  <div class="container">
    <div class="header">
      <h1>Trabalho 2: Implementação de uma Classe <code>MinhaString</code></h1>
      <p><strong>Disciplina:</strong> Algoritmos e Programação II</p>
      <p><strong>Universidade:</strong> UNIVALI</p>
      <p><strong>Professor:</strong> Evandro C. R. Rosa</p>
    </div>

    <section>
      <h2 class="section-title">Objetivo</h2>
      <p>Este projeto tem como objetivo implementar uma classe <code>MinhaString</code> que encapsula uma <code>c-string</code> e fornece métodos para manipulação de strings. O trabalho visa avaliar o uso de classes, alocação dinâmica e ponteiros, sem utilizar a biblioteca <code>std::string</code> ou qualquer outra classe que abstraia a alocação dinâmica.</p>
    </section>

    <section>
      <h2 class="section-title">Especificações da Classe <code>MinhaString</code></h2>
      <ul>
        <li><strong>Construtor:</strong> Criação de uma string vazia ou a partir de uma cadeia de caracteres (<code>const char*</code>), com alocação dinâmica de memória.</li>
        <li><strong>Destrutor:</strong> Liberação de memória no final da vida útil do objeto, sem vazamentos de memória.</li>
        <li><strong>Concatenar:</strong> Modifica a string atual, aceitando uma instância de <code>MinhaString</code> ou <code>const char*</code>, com realocação de memória, se necessário.</li>
        <li><strong>Métodos de Alteração de Caracteres:</strong>
          <ul>
            <li><code>upper()</code>: Converte todos os caracteres para maiúsculas.</li>
            <li><code>lower()</code>: Converte todos os caracteres para minúsculas.</li>
            <li><code>title()</code>: Primeiras letras de cada palavra em maiúsculas.</li>
            <li><code>snake_case()</code>: Converte CamelCase para snake_case.</li>
            <li><code>camelCase()</code>: Converte snake_case para CamelCase.</li>
          </ul>
        </li>
        <li><strong>Métodos de Conversão de Números:</strong>
          <ul>
            <li>Verifica se a string é um número (inteiro ou real).</li>
            <li>Retorna o número armazenado como <code>int</code> ou <code>double</code>, ou 0 se não for número.</li>
          </ul>
        </li>
        <li><strong>Acesso à C-String Interna:</strong> Permite retornar a <code>c-string</code> interna, sem permitir modificações.</li>
      </ul>
    </section>

    <section>
      <h2 class="section-title">Implementação e Teste</h2>
      <p>A classe <code>MinhaString</code> deve ser instanciada e utilizada em um programa de teste que avalie todos os métodos implementados.</p>
    </section>

    <div class="optional">
      <h3>Requisitos Opcionais (Pontos Extras)</h3>
      <ul>
        <li>Separar a implementação em <code>minhaString.hpp</code>, <code>minhaString.cpp</code> e <code>main.cpp</code>.</li>
        <li>Sobrecarga do operador <code>+</code> para concatenar strings.</li>
        <li>Sobrecarga do operador <code>[]</code> para acessar caracteres específicos da string.</li>
        <li>Permitir que <code>MinhaString</code> seja utilizada com <code>cout</code>.</li>
      </ul>
    </div>

    <section>
      <h2 class="section-title">Avaliação</h2>
      <p>O trabalho será avaliado por meio de defesa de código, onde os alunos deverão explicar a implementação. O projeto pode ser realizado em equipes de até três pessoas, e a nota individual dependerá das respostas durante a defesa.</p>
    </section>

    <footer>
      <p>&copy; 2024 UNIVALI - Algoritmos e Programação II</p>
    </footer>

  </div>

</body>
</html>
