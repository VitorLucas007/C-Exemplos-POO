/*
Crie uma classe chamada Produto com os atributos nome, preco e
quantidade.

Crie métodos para adicionar ao estoque (adicionarEstoque) e retirar
do estoque (venderProduto), atualizando a quantidade.
*/

#include <iostream>

using namespace std;

// Criação da classe Produto
class Produto {
private:
    // Atributos privados
    string nome;
    double preco;
    int quantidade;

public:
    // Setters para definir os valores
    void setNome(string n) {
        nome = n;
    }

    void setPreco(double p) {
        preco = p;
    }

    void setQuantidade(int q) {
        quantidade = q;
    }

    // Getters para pegar os valores
    string getNome() {
        return nome;
    }

    double getPreco() {
        return preco;
    }

    int getQuantidade() {
        return quantidade;
    }

    // Método para adicionar produtos ao estoque
    int adicionarEstoque(int adicionaProduto) {
        quantidade += adicionaProduto;
        cout << adicionaProduto << " produto(s) foram adicionados ao estoque." << endl;
        return quantidade;
    }

    // Método para vender produtos (retirar do estoque)
    int venderProduto(int removeProduto) {
        // Validação para não permitir vender mais do que existe
        if (removeProduto > quantidade) {
            cout << "Quantidade insuficiente para venda!" << endl;
        } else {
            quantidade -= removeProduto;
            cout << removeProduto << " produto(s) foram vendidos." << endl;
        }
        return quantidade;
    }
};

int main() {
    // Criando uma instância da classe Produto
    Produto produto;

    // Setando os dados do produto
    produto.setNome("Sabão");
    produto.setPreco(6.50);
    produto.setQuantidade(5);

    // Exibindo os dados do produto
    cout << "Nome: " << produto.getNome() << endl;
    cout << produto.getPreco() << " R$" << endl;
    cout << produto.getQuantidade() << " QTD" << endl;

    // Adicionando produtos ao estoque
    int qtdAdd;
    cout << "Quantos deseja adicionar?" << endl;
    cin >> qtdAdd;
    produto.adicionarEstoque(qtdAdd);
    cout << "Quantidade em estoque agora: " << produto.getQuantidade() << endl;

    // Vendendo produtos
    int qtdVendido;
    cout << "Quantos deseja vender?" << endl;
    cin >> qtdVendido;
    produto.venderProduto(qtdVendido);
    cout << "Quantidade em estoque agora: " << produto.getQuantidade() << endl;

    // Alterando o produto
    produto.setNome("Caneta");
    produto.setPreco(1.00);
    produto.setQuantidade(10);

    // Exibindo os dados do novo produto
    cout << "Nome: " << produto.getNome() << endl;
    cout << produto.getPreco() << " R$" << endl;
    cout << produto.getQuantidade() << " QTD" << endl;

    return 0;
}
