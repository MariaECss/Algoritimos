#include <iostream>
using namespace std;

int somar_tres_inteiros(int num1, int num2, int num3){
        int soma = num1 + num2 + num3;
        return soma;

}

int main(){

        int soma_total = somar_tres_inteiros(4, 5, 3);
        cout << soma_total << endl;

        int soma2 = somar_tres_inteiros(1, 1, 1);
        cout << soma2 << endl;

        int soma = somar_tres_inteiros(0, 2, 5);
        cout << soma << endl;


}
