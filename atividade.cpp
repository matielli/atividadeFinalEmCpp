#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;
int menu;
int ID[1000];
string Titulo[1000];
string Descricao[1000];
string DataDeVencimento[1000];
string Status[1000];
int main (){

cout << "Sistema De Gerenciamento De Tarefas" << endl;
cout << "1. Adicionar Tarefa" << endl;
cout << "2. Visualizar Tarefa" << endl;
cout << "3. Editar Tarefa" << endl;
cout << "4. Remover Tarefa" << endl;
cout << "5. Buscar Tarefa" << endl;
cout << "6. Filtrar Taferas Por Status" << endl;
cout << "0. Sair" << endl;

cin >> menu;

if (menu == 1){
    cout << "ID:";
    cin >> ID[1000];
    cout << "Titulo:";
    cin >> Titulo[1000];
    cout << "Descrição: ";
    cin.ignore(); getline(cin, Descricao[1000]);
    cout << "Data De Vencimento: ";
    cin.ignore(); getline(cin, DataDeVencimento[1000]);
    cout << "Status: ";
    cin.ignore(); getline(cin, Status[1000]);
}
return 0;
}



