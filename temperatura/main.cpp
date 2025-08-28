#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    float cidade1[7], cidade2[7];
    int menu;
    string por;
    cout<<"oi usuario"<<endl;
    cout<<"escolha uma das opcoes"<<endl;
    do {

    cout<<"1-colocar temperatura, 2-mostrar media, 3-mostrar o dia mais quente, 4-sair"<<endl;
    cin >> menu;
    switch(menu) {
    case 1:
    cout << "fale a temperatura da semana da cidade 1" << endl;
    for (int i = 0; i < 7; i++) {
    cin >> cidade1[i];
    }
    cout << "fale a temperatura da semana da cidade 2:" << endl;
    for (int i = 0; i < 7; i++) {
    cin >> cidade2[i];

    }
    break;
    case 2:

         {
    float n1=0,n2=0;
    for(int i=0;i<7;i++){
    n1+=cidade1[i];
    n2+=cidade2[i];
    }
    cout<<"a media da primeira cidade e "<<n1/7<<endl;
    cout<<"a media da segunda cidade e "<<n2/7<<endl;


    break;
    }
    case 3: {
    int quente = 0;
    for (int i=1;i<7;i++){
    if (cidade1[i] > cidade1[quente] || cidade2[i] > cidade2[quente]) {
    quente = i;
    }
    }
    cout << "O dia mais quente foi o dia " << quente + 1 << endl;
    break;
    }
    }
    }while(menu != 4);
    }
