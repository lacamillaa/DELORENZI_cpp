#include <cstring>
#include <iostream>

using namespace std;

class Persona {
    // variabili private
    string nome;
    int eta = 0;

public:
    Persona(string nome, int eta) {
        this->nome = nome;
        this->eta = eta;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}