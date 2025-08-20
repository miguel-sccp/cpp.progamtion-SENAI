  #include <iostream>
using namespace std;
int main() {
int n1, n2, soma, opcao;
do{
cout << "Oi usuario, vc pode escolher entre essas opcoes" << endl;
cout << "1 (dar oi para vc de novo), 2 (somar dois numeros) e 3 (sair do programa com carinho)" << endl;
cin >> opcao;
switch(opcao){
case 1:
cout << "Ola meu usuario favorito" << endl;
break;
case 2:
cout<<"klr so me complica nessa merda"<<endl;
cout << "Vai logo escreve dois numeros ai: "<<endl;
 cin >> n1 >> n2;
soma = n1 + n2;
cout << "To ai essa porra: " << soma << endl;
break;
case 3:
cout << "Saindo dessa merda de programa" << endl;
break;
default:
cout << "nao dei essa klr de opcao!" << endl;}
} while(opcao != 3);
return 0;}
