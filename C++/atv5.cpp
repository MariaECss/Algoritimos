#include <iostream>
using namespace std;

// EXERCÍCIO: Complete o código e os parâmetros da FUNÇÃO mostrar_pessoa QUE RECEBE NOME E CIDADE DO ALUNO
// E IMPRIME UMA MENSAGEM APRESENTANDO-O.
// NO main, CHAME A FUNÇÃO PARA 3 ALUNOS.

void mostrar_pessoa(string nome, string cidade){
    cout << nome << " mora em " << cidade << endl;

}

int main(){
    mostrar_pessoa("Fernando", "Curitiba");
    mostrar_pessoa("Larissa", "Colombo");
    mostrar_pessoa("Eduarda", "Pinhais");
}
