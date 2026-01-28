#include <cstring>
#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    string nome;
    cout << "Inserisci il nome: ";
    // cin >> nome; // legge fino al primo spazio bianco
    getline(cin, nome); // legge tutto il buffer

    auto* persona = new Persona(nome, 1);
    persona->stampaDati();
    delete persona;
    // con delete libera la memoria e invoca il distruttore
    persona = nullptr;
    return 0;
}