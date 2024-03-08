#include "stdafx.h"

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


int main() {
    std::list<Candidato> candidatos;
    std::list<Voto> votos;
    int opcao;

    do {
        std::cout << "\nSistema de Votacao\n";
        std::cout << "\n======================================\n";
        std::cout << "1 - Cadastrar novo candidato\n";
        std::cout << "2 - Listar candidatos cadastrados\n";
        std::cout << "3 - Cadastrar novo voto\n";
        std::cout << "4 - Apurar eleicao\n";
        std::cout << "0 - Sair\n";
        std::cout << "======================================\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
        case 1:
            cadastrarCandidato(candidatos);
            break;
        case 2:
            listarCandidatos(candidatos);
            break;
        case 3:
            cadastrarVoto(votos);
            break;
        case 4:
            apurarEleicao(candidatos, votos);
            break;
        case 0:
            std::cout << "Saindo...\n";
            break;
        default:
            std::cout << "Opcao invalida! Por favor, tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}

// cadastrar candidato
void cadastrarCandidato(std::list<Candidato>& candidatos) {
    std::string nome, partido, cargo;
    int codigo;

    std::cout << "Nome do candidato: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout << "Codigo do candidato: ";
    std::cin >> codigo;
    std::cout << "Partido: ";
    std::cin.ignore();
    std::getline(std::cin, partido);
    std::cout << "Cargo: ";
    std::getline(std::cin, cargo);

    candidatos.push_back(Candidato(nome, codigo, partido, cargo));
    std::cout << "Candidato cadastrado com sucesso!\n";
}
