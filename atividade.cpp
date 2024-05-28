#include <iostream>
#include <string>
#include<stdio.h>
#include <iomanip>
using namespace std;
int controle = 0;
int menu;
int ID[999];
std::string Titulo[999];
std::string Descricao[999];
std::string DataDeVencimento[999];
std::string Status[999];
int main (){
    int menu = 0;
    
    do{
        cout << "Sistema De Gerenciamento De Tarefas" << endl;
cout << "1. Adicionar Tarefa" << endl;
cout << "2. Visualizar Tarefa" << endl;
cout << "3. Editar Tarefa" << endl;
cout << "4. Remover Tarefa" << endl;
cout << "5. Buscar Tarefa" << endl;
cout << "6. Filtrar Taferas Por Status" << endl;
cout << "0. Sair" << endl;

cin >> menu;
if (menu == 0) 
cout << "Tarefa Finalizada Com Sucesso!" << endl;


if (menu == 1){
    ID[controle] = controle;
    cout << "Titulo:\n";
    cin >> Titulo[controle];
    cout << "Descrição:\n ";
    cin >> Descricao[controle];
    cout << "Data De Vencimento:\n ";
    cin >> DataDeVencimento[controle];
    cout << "Status:\n ";
    cin >> Status[controle];
     controle ++;
}

 
if (menu == 2){
cout <<"Lista De Tarefas" << endl;
    for (int i = 0; i < controle; i++){
        cout << i;
        cout << "ID: " << ID[i]  << endl;
        cout << "Titulo: " << Titulo[i] << endl;
        cout << "Descricao: " << Descricao[i] << endl;
        cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
        cout << "Status: " << Status[i] << endl;
    }

    
}
if (menu == 3){
    

    }

    }while (menu !=0);
    

   return 0;

}




