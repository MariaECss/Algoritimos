#include<iostream>
#include <string>
using namespace std;
struct Data{
    int dia;
    int mes;
    int ano;
};
struct aluno{
    Data nascimento;
    string nome;
    string mat;
    string curso;
    int cpf;
    int telefone;

};
 aluno cadastrar_aluno(){
    aluno a;
    cout<<"Digite a data de nascimento: "<<endl;
    cin>>a.nascimento.dia;
    cin>>a.nascimento.mes;
    cin>>a.nascimento.ano;
    cout<<"Digite a matricula: "<<endl;
    cin>>a.mat;
    cout<<"Digite o nome do aluno: "<<endl;
    cin>>a.nome;
    cout<<"Digite o curso do aluno: "<<endl;
    cin>>a.curso;
    cout<<"Digite o CPF do aluno: "<<endl;
    cin>>a.cpf;
    cout<<"Digite o telefone do aluno: "<<endl;
    cin>>a.telefone;

    return a;
}
void imprimir_aluno(aluno a){
      cout<<"=========Cadastro Concluído com sucesso!======="<<endl;
      cout<<"A data de nascimento: "<<a.nascimento.dia<<"/"<<a.nascimento.mes<<"/"<<a.nascimento.ano<<endl;
    cout<< "A matricula do do aluno(a) é: "<<a.mat<<endl;
    cout<<"O nome do aluno é: "<<a.nome<<endl;
    cout<<"O curso do aluno é: "<<a.curso<<endl;
    cout<<"O CPF do aluno(a) é: "<<a.cpf<<endl;
    cout<<"O telefone do aluno(a) é: "<<a.telefone<<endl;

}



int main(){
 aluno al1 = cadastrar_aluno();
    imprimir_aluno(al1);

}
