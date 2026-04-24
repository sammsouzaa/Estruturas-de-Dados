#include <iostream>
#include "Trabalhador.h"
using namespace std;

void Trabalhador::setNome(string nome){
    this->nome = nome;
}

string Trabalhador::getNome(){
    return nome;
}

void Trabalhador::setIdade(int idade){
    this->idade = idade;
}

int Trabalhador::getIdade(){
    return idade;
}

void Trabalhador::setOrganizacao(string organizacao){
    this->organizacao = organizacao;
}

string Trabalhador::getOrganizacao(){
    return organizacao;
}

void Trabalhador::apresentar(){
    cout << "NOME: " << nome << endl;
    cout << "IDADE: " << idade << endl;
    cout << "ORGANIZAÇÃO: " << organizacao << endl;
}

Trabalhador::Trabalhador(string nome, int idade, string organizacao)
    : nome(nome), idade(idade), organizacao(organizacao) {}

Trabalhador::Trabalhador()
    : nome("sem nome"), idade(0), organizacao("sem organização") {}
    
