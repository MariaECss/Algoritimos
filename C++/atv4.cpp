#include <iostream>
using namespace std;

// EXERCÍCIO: Analise a função calcular_dobro QUE RECEBE UM INTEIRO E RETORNA O DOBRO.
// Você deve alterar o código dentro do main para declarar um número, ler o número (com a função le_numero), usar a função para calcular o dobro e imprimir na tela o número e o seu dobro

// Exemplo:
// Digite um número inteiro:
// 6
// O dobro de 6 é 12

int receber_numero(int x){

    cout << "Digite um numero inteiro " << endl;
    cin >> x;
    return x;
}


int calcular_dobro(int x){
    return x * 2;
}

int main(){

    int x;
    x = receber_numero(x);
    x = calcular_dobro(x);
    cout << "O dobro de " << x / 2 << " e igual a: " << x;

}

