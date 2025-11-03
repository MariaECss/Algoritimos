#include <iostream>

using namespace std;

/*------------------------------------------------*/

int le_numero(string receber_texto){

    int num;
    cout << receber_texto;
    cin >> num;
    return num;

}

/*------------------------------------------------*/

int calcular_dias_totais(int anos, int meses, int dias){

    int dias_totais;
    dias_totais = (anos*365) + (meses*30) + dias;

    return dias_totais;

}

/*------------------------------------------------*/

int main(){


	int anos, dias, meses;
	int dias_totais;


	anos = le_numero("Digite quantos anos voce tem: ");
	meses = le_numero("Digite quantos meses a mais voce tem: ");
	dias = le_numero("Digite quandos dias a mais voce tem: ");

	dias_totais = calcular_dias_totais(anos, meses, dias);

	cout << "Voce tem " << dias_totais << " dias de vida!" << endl;



}
