#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>
using namespace std;

class Trabalhador{
private:
    string nome;
    int idade;
    string organizacao;
    
public:
    void setNome(string nome);
    string getNome();
    
    void setIdade(int idade);
    int getIdade();
    
    void setOrganizacao(string organizacao);
    string getOrganizacao();
    
    void apresentar();
    
    Trabalhador(string nome, int idade, string organizacao);
    Trabalhador();
};

#endif
