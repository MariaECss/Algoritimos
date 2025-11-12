#include <iostream>
#include <iomanip>
using namespace std;

// EXERCÍCIO: CRIE UMA FUNÇÃO calcular_media3 QUE RECEBE 3 NOTAS (DOUBLE)
// E RETORNA A MÉDIA ARITMÉTICA DAS NOTAS
// NO main, LEIA AS 3 NOTAS DO USUÁRIO (usando a função le_numero_double) E IMPRIMA A MÉDIA.

double calcular_media_double(double n1, double n2, double n3){
    return (n1 + n2 + n3) / 3;
}


double le_numero_double(string mensagem){
    double x;
    cout << mensagem << endl;
    cin >> x;
    return x;
}


int main(){
    double a, b, c;

    a = le_numero_double("Digite um numero:");
    b = le_numero_double("Digite um numero:");
    c = le_numero_double("Digite um numero:");

    cout << fixed << setprecision(1);
    cout << "Media: " << calcular_media_double(a, b, c) << endl;
}

