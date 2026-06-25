# Estruturas de Dados em C++

Este repositório contém meus materiais de estudo, resumos e códigos práticos para a disciplina de Estruturas de Dados (ED) utilizando a linguagem C++.

## Estrutura do Repositório

O projeto está organizado cronologicamente, acompanhando os tópicos estudados:

- **00_linguagem_c++:** Introdução básica ao C++ (sintaxe, variáveis, ponteiros).
- **01_introducao:** Revisão de Structs e tipos de dados customizados.
- **02_abstracao_tipos_dados:** Conceitos de abstração e TAD.
- **03_tipos_abstratos:** Implementação de TADs.
- **04_poo:** Programação Orientada a Objetos (Classes, Objetos, Construtores).
- **05_heranca_encapsulamento:** Herança, visibilidade e modificadores de acesso.
- **06_polimorfismo:** Polimorfismo e sobrescrita de métodos.
- **07_classes-abstratas:** Classes abstratas, interfaces e padrões de projeto (Decorator).
- **08_constainers_sequenciais:** Uso da STL (Standard Template Library) com pilhas, filas, deques e listas.
- **09_lista_pilha_fila_vetores:** Implementação própria de Listas, Pilhas e Filas utilizando vetores.
- **simulado_prova:** Material de preparação e revisão para avaliações.

Cada pasta temática contém, em geral, o material da aula (PDF), um resumo (`README.md`) e os códigos em C++ implementando os conceitos abordados.

## Como Compilar os Códigos

Para compilar os arquivos soltos das primeiras pastas (ex: `00_linguagem_c++`), utilize o terminal:
```bash
g++ 01_ola_mundo.cpp -o executavel
./executavel
```

A partir da pasta `04_poo`, os projetos práticos contam com um arquivo `Makefile`. Para compilar e rodar, navegue até o diretório correspondente e execute:
```bash
make
./programa
```
