#include <iostream>
using namespace std;

void repetir_mensagem(string mensagem){
    for(int i = 0; i < 3; i++){
        cout << mensagem << endl;
    }
}

int main(){
    repetir_mensagem("Boa aula!");
}

