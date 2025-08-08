#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{int idade=17;
char sexo='m';
bool ativo=1;
string nome="marcio";
float peso=1.67;
double altura=1.75;
cout<< idade <<"/n";
cout<< sexo<<endl;
cout<< ativo<<endl;
cout<<nome<<endl;
cout << "digite seu nome " << endl;
getline(cin,nome);
cout << nome;
return 0;}
