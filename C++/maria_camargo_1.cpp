#include <iostream>
using namespace std;

int main(){

        string vet_semana[7];

        cout << "Digite os nomes dos dias da semana: " << endl;
        for(int i=0; i<7; i++){
                cin >> vet_semana[i];
        }

        cout << "Você digitou os seguintes dias: " << endl;
        for(int i=0; i<7; i++){
                cout << vet_semana[i] << endl;
        }
        cout << endl;

}
