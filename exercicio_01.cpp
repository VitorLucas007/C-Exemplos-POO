
/*
 Pergunta:
 Crie uma classe chamada Livro, que tenha dois atributos: titulo e autor
 Depois, crie métodos getters e setters para esses atributos. 
 */

 #include <iostream>

using namespace std;

class Livro {
    // Declaração das variáveis (declaro elas como privadas)
private:
    string titulo;
    string autor;

    // Declaração dos métodos set e get (declaro eles como públicos)
public:
    // Setters para definir os dados
    void setTitulo(string t) { titulo = t; }
    void setAutor(string a) { autor = a; }

    // Getters para obter os dados 
    string getTitulo() { return titulo; }
    string getAutor() { return autor; }
};

int main() {
    // Declarando uma instância da nossa classe
    Livro livro;

    // Setando os dados com os métodos setTitulo e setAutor
    livro.setTitulo("Senhor dos Anéis");
    livro.setAutor("J.R.R. Tolkien");

    // Chamando os métodos getTitulo e getAutor e imprimindo no console
    cout << "Título: " << livro.getTitulo() << endl;
    cout << "Autor: " << livro.getAutor() << endl;

    return 0;
}
