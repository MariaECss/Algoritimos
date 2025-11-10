#include <iostream>
using namespace std;


void apresentar_curso(string mensagem){
cout << "Bem vindo ao curso de " << mensagem  << "." << endl;

}


int main(){
    apresentar_curso("Informática");
    apresentar_curso("Eletrotécnica");
    apresentar_curso("Administração");
}
