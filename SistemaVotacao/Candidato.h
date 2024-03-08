#include "stdafx.h"

/*
Seu programa dever� armazenar, para um candidato, os seguintes dados:

Nome do candidato;
C�digo do candidato;
Partido;
Cargo.
*/

#pragma once
class Candidato {
public:
    std::string candidato;
    int codigo;
    std::string partido;
    std::string cargo;

    Candidato(std::string n, int cod, std::string part, std::string c) : candidato(n), codigo(cod), partido(part), cargo(c) {}
};