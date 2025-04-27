#include <iostream>

using namespace std;

// Definição da classe Carro
class Carro {
private:
    // Atributos privados da classe
    string marca;
    string modelo;
    int ano;

public:
    // Setter para definir a marca
    void setMarca(string ma) { 
        marca = ma; 
    }

    // Setter para definir o modelo
    void setModelo(string mo) { 
        modelo = mo; 
    }

    // Setter para definir o ano
    void setAno(int a) { 
        ano = a; 
    }

    // Getter para obter a marca
    string getMarca() { 
        return marca; 
    }

    // Getter para obter o modelo
    string getModelo() { 
        return modelo; 
    }

    // Getter para obter o ano
    int getAno() { 
        return ano; 
    }

    // Método para exibir as informações do carro
    void mostrarInformacoes() {
        cout << "Marca: " << getMarca() << endl;
        cout << "Modelo: " << getModelo() << endl;
        cout << "Ano: " << getAno() << endl;
    }
};

int main() {
    // Criação de um objeto do tipo Carro
    Carro carro;

    // Configurando os atributos do carro usando os setters
    carro.setMarca("Fiat");
    carro.setModelo("Fiat UNO");
    carro.setAno(2005);

    // Exibindo as informações do carro
    carro.mostrarInformacoes();

    return 0;
}
