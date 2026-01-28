//
// Created by 12999356 on 28/01/2026.
//

#include "Persona.h"

Persona::Persona() {
    this->nome = "Ignoto";
    this->eta = -1;
}

Persona::Persona(string nome, int eta) {
    this->nome = nome;
    this->eta = eta;
}

void Persona::stampaDati() {
    cout << this->nome << " eta': " << eta << endl;
}

Persona::~Persona() {
    cout << "~Persona" << endl;
}
