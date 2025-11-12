#include <iostream>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO preco_final QUE RECEBE O PREÇO E O DESCONTO (%)
// E RETORNA O PREÇO COM DESCONTO.
// NO main, LEIA O PREÇO E O DESCONTO E EXIBA O RESULTADO.


double le_numero_double(string mensagem){
    double x;
    cout << mensagem << endl;
    cin >> x;
    return x;
}

double preco_final(double preco, double desconto){
    double valor_final = preco - (preco * (desconto / 100.0));
    return valor_final;
}


int main(){
    double p, d;
	p = le_numero_double("Digite um numero double: ");
	d = le_numero_double("Digite um numero double: ");

    cout << "Preco final: " << preco_final(p, d) << endl;
}


