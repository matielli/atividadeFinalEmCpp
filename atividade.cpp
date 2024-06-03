#include <iostream>
#include <string>
#include<stdio.h>
#include <iomanip>
using namespace std;
int controle = 0;
int menu;
int ID[999];
int apagar = -1;
std::string busca;
std::string procurar;
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
    cout << "Data De Vencimento (DD/MM/AAAA):\n ";
    cin >> DataDeVencimento[controle];
    cout << "Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída):\n ";
    cin >> Status[controle];
     controle ++;
}

 
if (menu == 2){
cout <<"Lista De Tarefas" << endl;
    for (int i = 0; i < controle; i++){
        if (ID[i] != -1){
        cout << "ID:" << ID[i]  << endl;
        cout << "Titulo: " << Titulo[i] << endl;
        cout << "Descricao: " << Descricao[i] << endl;
        cout << "DataDeVencimento (DD/MM/AAAA): " << DataDeVencimento[i] << endl;
        cout << "Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): " << Status[i] << endl;
        }
    }

    
}
if (menu == 3){

    int editar;
    cout << "Digite o ID da tarefa para ser editada.\n";
    cin >> editar;
            cout << "Novo Título: ";
            cin >> Titulo[editar];
            cout << "Nova Descrição: ";
            cin >> Descricao[editar];
            cout << "Nova Data de Vencimento (DD/MM/AAAA): ";
            cin >> DataDeVencimento[editar];
            cout << "Novo Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
            cin >> Status[editar];
        
            cout << "Tarefa editada com sucesso!" << endl;
        

    }

        else if (menu == 4) {

        cout << "Digite o ID da tarefa que deseja remover: " << endl;
        cin >> apagar;
        for (int i = 0; i < controle; i++) {
            if (ID[i] == apagar) {        
                ID[i] = -1;
                }

        cout << "Tarefa apagada com sucesso!" << endl;
    }
        }
    
        if (menu == 5) {
            
            cout << "Digite o título da tarefa que deseja buscar: ";
            cin >> busca;
            for (int i = 0; i < controle; i++) {
                if ( busca == Titulo[i]) {
                    cout << "ID: " << ID[i] << endl;
                    cout << "Titulo: " << Titulo[i] << endl;
                    cout << "Descrição: " << Descricao[i] << endl;
                    cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
                    cout << "Status: " << Status[i] << endl;


                }
                
            }
            
 }

     if (menu == 6) {
        cout << "Digite o status da tarefa que deseja filtrar: ";
        cin >> procurar;
        
        for (int i = 0; i < controle; i++){

              if (procurar == Status[i]) {
                Status[i] == procurar;

                 cout << "ID: " << ID[i] << endl;
                    cout << "Titulo: " << Titulo[i] << endl;
                    cout << "Descrição: " << Descricao[i] << endl;
                    cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
                    cout << "Status: " << Status[i] << endl;

            }   

            }
        }
        
    
    
    
    
    }while (menu !=0);
    
    return 0;
   
}