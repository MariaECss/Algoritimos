#include <iostream>
using namespace std;

//Faça um programa simples de adivinhação numérica;
// O programa terá, no máximo, 3 tentativas. Se não acertar, a humanidade ganha. Se acertar, as máquinas ganham;
// A cada tentativa o usuário deve informar se o palpite é certo, maior ou menor que o número pensado;

//Use a função le_numero para ler um número entre 1 e 10 com a mensagem conforme exemplo;


// No main, deve criar um laço de repetição (while) que executará até que o número seja adivinhado ou até exceder o número de tentativas.

// Tente organizar seu código em funções

// Exemplo:
// Digite o número a ser adivinhado entre 1 e 10
// 9
// Seu número é o 2, maior ou menor?
// maior
// Seu número é o 3, maior ou menor?
// maior
// Seu número é o 9, maior ou menor?
// sim
// AS MÁQUINAS VENCERAM

int le_numero(string mensagem){
int num;
cout <<mensagem << endl;
cin >> num;
return num;
}

int main(){

 int num_alvo, palpite;
 int minimo, maximo;
 int tentativas = 0;
 string resposta;


 num_alvo = le_numero("digite o numero a ser adivinhado entre 1 e 10");
 palpite = 5;
 tentativas = tentativas + 1;
 cout << "0 palpite �" << palpite << ". (certo/maior/menor)?" << endl;
 cin >> resposta;

 while(palpite != num_alvo && tentativas < 4) {
        if(resposta == 'maior'){
                minimo = palpite;
                palpite = (minimo + maximo)/2;
        }else if(resposta == 'menor'){
                maximo = palpite;
                palpite = (minimo + maximo)/2;
        }else if(resposta == 'certo'){

            cout << "VOCE ACERTOU|" << endl;
            break;
        }

 }

}
