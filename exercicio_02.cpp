#include <iostream>

using namespace std;

// Definição da classe Pessoa
class Pessoa {
private:
    // Atributos privados (acessados apenas via getters e setters)
    string nome;
    int idade;

public:
    // Setters: métodos para modificar os atributos
    void setNome(string n) { 
        nome = n; 
    }

    void setIdade(int i) { 
        idade = i; 
    }

    // Getters: métodos para acessar os atributos
    string getNome() { 
        return nome; 
    }

    int getIdade() { 
        return idade; 
    }

    // Método para imprimir os dados no console
    void mostrarDados() {
        // Forma correta de acessar os métodos getters dentro da classe
        // Também poderia usar this->getNome() para deixar explícito que está acessando o próprio objeto
        cout << "Nome: " << getNome() << endl;
        cout << "Idade: " << getIdade() << " anos" << endl;
    }
};

int main() {
    // Criação de um objeto da classe Pessoa
    Pessoa pessoa;

    // Configurando o objeto com nome e idade usando os setters
    pessoa.setNome("Vitor Lucas");
    pessoa.setIdade(23);

    // Chamando o método para mostrar os dados no console
    pessoa.mostrarDados();

    return 0;
}
