/**
Crie uma classe ContaBancaria com atributos titular e saldo.

O saldo deve começar em 0.

Crie métodos depositar(valor) e sacar(valor), onde o saque só deve
ser permitido se houver saldo suficiente.

Crie também os getters e setters apropriados.
*/

#include <iostream>

using namespace std;

// Definindo a classe ContaBancaria
class ContaBancaria {
private:
    // Atributos privados
    string titular;
    double saldo = 0; // saldo inicia com 0 automaticamente

public:
    // Setters
    void setTitular(string t) {
        titular = t;
    }

    void setSaldo(double s) {
        saldo = s;
    }

    // Getters
    string getTitular() {
        return titular;
    }

    double getSaldo() {
        return saldo;
    }

    // Método para depositar valor
    double depositar(double valor) {
        saldo += valor;
        return saldo; // Retornando o saldo atualizado
    }

    // Método para sacar valor
    double sacar(double valor) {
        if (valor > saldo) {
            cout << "Saldo insuficiente, faça um depósito!" << endl;
        } else {
            saldo -= valor;
            cout << "Saque realizado!" << endl;
        }
        return saldo; // Retornando o saldo atualizado
    }
};

int main() {
    // Criando a conta
    ContaBancaria contaBancaria;

    // Definindo titular e saldo inicial
    contaBancaria.setTitular("Lucas");
    contaBancaria.setSaldo(100);

    // Exibindo informações iniciais
    cout << "Titular: " << contaBancaria.getTitular() << endl;
    cout << "Saldo inicial: R$ " << contaBancaria.getSaldo() << endl;

    // Recebendo valor de depósito
    double valorDeposito;
    cout << "Quanto deseja depositar? " << endl;
    cin >> valorDeposito;

    // Realizando depósito
    contaBancaria.depositar(valorDeposito);
    cout << "Saldo após depósito: R$ " << contaBancaria.getSaldo() << endl;

    // Recebendo valor de saque
    double valorSaque;
    cout << "Quanto deseja sacar? " << endl;
    cin >> valorSaque;

    // Realizando saque
    contaBancaria.sacar(valorSaque);
    cout << "Saldo atual: R$ " << contaBancaria.getSaldo() << endl;

    return 0;
}
