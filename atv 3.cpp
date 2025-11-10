#include <iostream>
using namespace std;

void mostrar_idade(string nome, int idade){
    cout << nome << " tem " << idade << " anos." << endl;
}

int main(){
    mostrar_idade("Lucas", 15);
    mostrar_idade("Bruna", 16);
    mostrar_idade("Igor", 17);
}

