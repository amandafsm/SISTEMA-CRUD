#include <string>
#include <iostream>
#include "menu.cpp"
#pragma once

class Medico:Paciente{
    private:
    string especializacao;
    void setespecializacao();
    string getespecializacao();

};
class Paciente {
    private: 
    string nome;
    int idade;
    string telefone;
    bool convenio;
    bool particular; 
    Paciente();

    void setnome(string a);
    void setidade(int a);
    void settelefone(string a);
    void setparticular(string a);
    string getnome();
    int getidade();
    string gettelefone();
};
int Paciente::getidade(){
    return idade;
}
void Paciente::setidade(int a){
    idade = a;
}
void Paciente::settelefone(string a){
    telefone = a;
}
void Paciente::setnome(string a){
    nome = a;
}