#include <iostream>
using namespace std;

#include "Trabalhador.h"

/*
class Trabalhador{
private:

    string nome;
    int idade;
    string organizacao;
    
public:
    
    void setNome(string nome){
        this->nome = nome;
    }
    
    string getNome(){
        return nome;
    }
    
    void setIdade(int idade){
        this->idade = idade;
    }
    
    int getIdade(){
        return idade;
    }
    
    void setOrganizacao(string organizacao){
        this->organizacao = organizacao;
    }
    
    string getOrganizacao(){
        return organizacao;
    }
    
    void apresentar(){
        cout << "NOME: " << nome << endl;
        cout << "IDADE: " << idade << endl;
        cout << "ORGANIZAÇÃO: " << organizacao << endl;
    }
    
    
    Trabalhador(string nome, int idade, string organizacao)
    : nome(nome), idade(idade), organizacao(organizacao) {}
    
    Trabalhador(){
        nome = "sem nome";
        idade = 0;
        organizacao = "sem organização";
    }
};

*/

int main()
{
    Trabalhador t1("Samuel", 20, "Unioeste");
    t1.apresentar();

    return 0;
}
