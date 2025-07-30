#include <string>
#include <iostream>
#include "menu.cpp"
#pragma once

using namespace std;

// Classe Pessoa
class Pessoa {

private:
    string nome;
    int idade;

public:
    Pessoa(string n = "", int i = 0) : nome(n), idade(i) {}

    void setNome(string n) { nome = n; }
    void setIdade(int i) { idade = i; }

    string getNome() const { return nome; }
    int getIdade() const { return idade; }
};

// Classe Paciente 
class Paciente : public Pessoa {
private:
    string telefone;
    bool convenio;
    bool particular;

public:
    Paciente(string n = "", int i = 0, string t = "", bool c = false, bool p = false)
        : Pessoa(n, i), telefone(t), convenio(c), particular(p) {}
        
    void setTelefone(string t) { telefone = t; }
    void setConvenio(bool c) { convenio = c; }
    void setParticular(bool p) { particular = p; }

    string getTelefone() const { return telefone; }
    bool getConvenio() const { return convenio; }
    bool getParticular() const { return particular; }
};

class Medico: public Pessoa{
    private:
    string especializacao;
    string CRM;

public:
    Medico(string n = "", int i = 0, string e = "", string c = "")
        : Pessoa(n, i), especializacao(e), CRM(c) {}

    void setEspecializacao(string e) { especializacao = e; }
    void setCRM(string c) { CRM = c; }

    string getEspecializacao() const { return especializacao; }
    string getCRM() const { return CRM; }
};       

