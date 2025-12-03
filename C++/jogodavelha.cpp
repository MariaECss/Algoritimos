#include <iostream>
using namespace std;

/*
 VOCÃŠ DEVE COMPLETAR O CÃ“DIGO DO JOGO DA VELHA
 DEVE INSERIR FUNÃ‡Ã•ES PARA QUE O JOGO REALIZE JOGADAS PARA CADA JOGADOR
 ATÃ‰ QUE ALGUM GANHE OU A VELHA GANHE
 LEMBRE-SE DE QUE OCORRE A VELHA QUANDO TODAS AS POSIÃ‡Ã•ES FORAM JOGADAS
 UM JOGADOR GANHA QUANDO MARCA SEU SÃ MBOLO EM UMA LINHA, COLUNA OU DIAGONAL

VOCÃŠ PODE CONSULTAR O EXERCÃ CIO DE ADIVINHAÃ‡ÃƒO PARA LEMBRAR COMO USAR O WHILE PARA FAZER JOGADAS.
DEVERÃ CRIAR FUNÃ‡Ã•ES PARA VERIFICAR SE ALGUÃ‰M GANHOU O JOGO

EM CASOS DE DÃšVIDAS COMPAREÃ‡A AOS ATENDIMENTOS;



Formato de entrega:

Salvar o arquivo como trabalho_jogo_da_velha.cpp e inserir na pasta Trabalhos do seu Github

*/
    // JOGO DA VELHA - INICIADO
    // 20/08/2025
    // Jogo da velha 3x3

            //Imprimir o tabuleiro
void mostrar(string msg, char tabuleiro[3][3]){
        cout << msg << endl;
    for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout << tabuleiro[i][j] << " ";
}
cout << endl;
}
}

//Fazer jogada
char jogar(string msg, char tabuleiro[][3],char xo){
        cout << msg << endl;
        cout << "Digite a linha e a coluna da jogada: " << endl;
    int pos_linha, pos_coluna;
    cin >> pos_linha >> pos_coluna;
        cout << "Voce digitou a linha " << pos_linha << " e a coluna " << pos_coluna << endl;
    return tabuleiro[pos_linha][pos_coluna] = xo;

}

//Conferir se o jogador X ganhou ou deu velha
bool conferirX(char tabuleiro[][3]){
        char xis = 'X';
    if(tabuleiro[0][0]==xis  && tabuleiro[0][1]==xis && tabuleiro[0][2]==xis){
return true;
    }else if(tabuleiro[1][0]==xis  && tabuleiro[1][1]==xis && tabuleiro[1][2]==xis){
return true;
    }else if(tabuleiro[2][0]==xis  && tabuleiro[2][1]==xis && tabuleiro[2][2]==xis){
return true;
    }else if(tabuleiro[0][0]==xis  && tabuleiro[1][1]==xis && tabuleiro[2][2]==xis){
return true;
    }else if(tabuleiro[0][2]==xis  && tabuleiro[1][1]==xis && tabuleiro[2][0]==xis){
return true;
    }else if(tabuleiro[0][0]==xis  && tabuleiro[1][0]==xis && tabuleiro[2][0]==xis){
return true;
    }else if(tabuleiro[1][0]==xis  && tabuleiro[1][1]==xis && tabuleiro[1][2]==xis){
return true;
    }else if(tabuleiro[2][0]==xis  && tabuleiro[2][1]==xis && tabuleiro[2][2]==xis){
return true;
    }
        return false;
}

//Conferir se o jogador O ganhou ou se deu velha
bool conferirO(char tabuleiro[][3]){
    char bola = 'O';
     if(tabuleiro[0][0]==bola  && tabuleiro[0][1]==bola && tabuleiro[0][2]==bola){
        return true;
    }else if(tabuleiro[1][0]==bola  && tabuleiro[1][1]==bola && tabuleiro[1][2]==bola){
        return true;
    }else if(tabuleiro[2][0]==bola  && tabuleiro[2][1]==bola && tabuleiro[2][2]==bola){
        return true;
    }else if(tabuleiro[0][0]==bola  && tabuleiro[1][1]==bola && tabuleiro[2][2]==bola){
        return true;
    }else if(tabuleiro[0][2]==bola  && tabuleiro[1][1]==bola && tabuleiro[2][0]==bola){
        return true;
    }else if(tabuleiro[0][0]==bola  && tabuleiro[1][0]==bola && tabuleiro[2][0]==bola){
        return true;
    }else if(tabuleiro[1][0]==bola && tabuleiro[1][1]==bola && tabuleiro[1][2]==bola){
        return true;
    }else if(tabuleiro[2][0]==bola  && tabuleiro[2][1]==bola && tabuleiro[2][2]==bola){
        return true;
    }
    return false;
}

int main(){

char tabuleiro[3][3]; //Declarando uma matriz com 3 linhas e 3 colunas
char vazio = '*';

// Preencher o tabuleiro com posições vazias
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
tabuleiro[i][j] = vazio;
}
}

// Imprimir o tabuleiro
cout << "Configuracao do tabuleiro:" << endl;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout << tabuleiro[i][j] << " ";
}
cout << endl;
}

            // Fazer uma jogada do jogador X
int pos_linha, pos_coluna;
cout << "Jogador X, digite uma posicao:" << endl;
cout << "Digite a linha e a coluna da jogada" << endl;
cin >> pos_linha >> pos_coluna;
cout << "Voce digitou a linha " << pos_linha << " e a coluna " << pos_coluna << endl;

            // Marcar a jogada no tabuleiro
char xis = 'X';
char bola = 'O';

        tabuleiro[pos_linha][pos_coluna] = xis; // o X foi marcado na matriz

// Imprimir o tabuleiro após a jogada de X
cout << "Configuração do tabuleiro:" << endl;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout << tabuleiro[i][j] << " ";
}
cout << endl;
}

                //1° jogada do O
    jogar("Jogador O, digite uma posição: ", tabuleiro, 'O');
    mostrar("Configuração do tabuleiro: ", tabuleiro);

                //2° jogada do X
    jogar("Jogador X, digite uma posição: ", tabuleiro, 'X');
    mostrar("Configuração do tabuleiro: ", tabuleiro);

                //2° jogada do O
    jogar("Jogador O, digite uma posição: ", tabuleiro, 'O');
    mostrar("Configuração do tabuleiro: ", tabuleiro);

                //3° jogada do X
    jogar("Jogador X, digite uma posição: ", tabuleiro, 'X');
    mostrar("Configuração do tabuleiro: ", tabuleiro);
    bool resultX = conferirX(tabuleiro);
    if(resultX == true){
            cout << "O jogador X ganhou o jogo!!!" << endl;
        }else{
                //3° jogada do O se o X não ganhar
            jogar("Jogador O, digite uma posição: ", tabuleiro, 'O');
            mostrar("Configuração do tabuleiro: ", tabuleiro);
            bool resultO = conferirO(tabuleiro);
                if(resultO == true){
                cout << "O jogador O ganhou o jogo!!!" << endl;
        }else{
                    //4° jogada do X se o O não ganhar
            jogar("Jogador X, digite uma posição: ", tabuleiro, 'X');
            mostrar("Configuração do tabuleiro: ", tabuleiro);
            if(resultX == true){
                cout << "O jogador X ganhou!!!" << endl;
        }else{
                    //4° jogada do O se o X não ganhar
            jogar("Jogador O, digite uma posição: ", tabuleiro, 'O');
            mostrar("Configuração do tabuleiro: ", tabuleiro);
                    bool resultO = conferirO(tabuleiro);
            if(resultO == true){
                cout << "O jogador O ganhou o jogo!!!" << endl;
        }else{
                //5° jogada do X, mas já deu velha
            jogar("Jogador X, digite uma posição: ", tabuleiro, 'X');
            mostrar("Configuração do tabuleiro: ", tabuleiro);
                cout << "Deu velha!" << endl;
                }
                }
                }
                    }

}
