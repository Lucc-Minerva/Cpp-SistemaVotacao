#include "stdafx.h"
#include <list>
#include <string>
#include <map>

/*
Seu programa dever� armazenar, para um candidato, os seguintes dados:

Nome do candidato;
C�digo do candidato;
Partido;
Cargo.
*/

class Candidato {
public:
    std::string candidato;
    int codigo;
    std::string partido;
    std::string cargo;

    Candidato(std::string n, int cod, std::string part, std::string c) : candidato(n), codigo(cod), partido(part), cargo(c) {}
};

/*
Seu programa dever� armazenar, para um voto, os seguintes dados:

Cargo;
C�digo do candidato;
Ent�o crie 2 listas, uma para conter os candidatos cadastrados; outra para conter os votos computados.
*/

class Voto {
public:
    std::string cargo;
    int codigoCandidato;

    Voto(std::string c, int cod) : cargo(c), codigoCandidato(cod) {}
};

// Crie uma op��o para cadastrar um novo candidato;
void cadastrarCandidato(std::list<Candidato>& candidatos);
// Crie uma op��o para listar os candidatos cadastrados;
void listarCandidatos(const std::list<Candidato>& candidatos);
// Crie uma op��o para cadastrar um novo voto;
void cadastrarVoto(std::list<Voto>& votos);
// Crie uma op��o para fazer a apura��o da elei��o (computar os votos atuais e anunciar os vencedores).
void apurarEleicao(const std::list<Candidato>& candidatos, const std::list<Voto>& votos);
