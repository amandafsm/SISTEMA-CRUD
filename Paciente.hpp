#include <iostream>
#include <string>
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

// Classe Médico
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

// Enumeração para tipos de consulta 
enum class TipodeConsulta {
    RESTAURACAO,
    CLAREAMENTO,
    ORTODONTIA,
    LIMPEZA,
    EXAMES_ROTINA
};

// Classe Consulta
class Consulta {
private:
    Paciente paciente;
    Medico medico;
    string data;
    string horario;
    TipodeConsulta tipo;
    string parecer;
    string dataProcedimento;

public:
    Consulta(Paciente p = Paciente(), Medico m = Medico(), string d = "", string h = "",
             TipodeConsulta t = TipodeConsulta::RESTAURACAO, string pr = "", string dP = "")
        : paciente(p), medico(m), data(d), horario(h), tipo(t), parecer(pr), dataProcedimento(dP) {}

    void setPaciente(const Paciente& p) { paciente = p; }
    void setMedico(const Medico& m) { medico = m; }
    void setData(const string& d) { data = d; }
    void setHorario(const string& h) { horario = h; }
    void setTipodeConsulta(TipodeConsulta t) { tipo = t; }
    void setTipodeConsulta(const string& t) { tipo = stringToTipodeConsulta(t); }
    void setParecer(const string& pr) { parecer = pr; }
    void setDataProcedimento(const string& dP) { dataProcedimento = dP; }

    Paciente getPaciente() const { return paciente; }
    Medico getMedico() const { return medico; }
    string getData() const { return data; }
    string getHorario() const { return horario; }
    TipodeConsulta getTipodeConsulta() const { return tipo; }
    string getParecer() const { return parecer; }
    string getDataProcedimento() const { return dataProcedimento; }

    static TipodeConsulta stringToTipodeConsulta(const string& t) {
        if (t == "RESTAURACAO") return TipodeConsulta::RESTAURACAO;
        if (t == "CLAREAMENTO") return TipodeConsulta::CLAREAMENTO;
        if (t == "ORTODONTIA") return TipodeConsulta::ORTODONTIA;
        if (t == "LIMPEZA") return TipodeConsulta::LIMPEZA;
        if (t == "EXAMES_ROTINA") return TipodeConsulta::EXAMES_ROTINA;
        return TipodeConsulta::RESTAURACAO;
    }
};


