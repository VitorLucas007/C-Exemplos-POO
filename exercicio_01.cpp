#include <iostream>

using namespace std;

// Definição da classe Livro
class Livro {
private:
    // Atributos privados da classe
    string titulo;
    string autor;

public:
    // Setter para definir o título
    void setTitulo(string t) { 
        titulo = t; 
    }

    // Setter para definir o autor
    void setAutor(string a) { 
        autor = a; 
    }

    // Getter para obter o título
    string getTitulo() { 
        return titulo; 
    }

    // Getter para obter o autor
    string getAutor() { 
        return autor; 
    }
};

int main() {
    // Criação de um objeto do tipo Livro
    Livro livro;

    // Configurando os atributos do livro usando os setters
    livro.setTitulo("Senhor dos Anéis");
    livro.setAutor("J.R.R. Tolkien");

    // Exibindo os dados do livro usando os getters
    cout << "Título: " << livro.getTitulo() << endl;
    cout << "Autor: " << livro.getAutor() << endl;

    return 0;
}
