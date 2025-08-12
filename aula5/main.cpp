//Criar um programa que leia dois numeros e mostre a soma, subtração, multiplicação, divisão (inteira e precisa) e o resto da divisão
#include <iostream>
using namespace std;
int main()
{
int n1;
int n2;
cout<<"digite o 1º numero"<<endl;
cin>>n1;
cout << "digite o 2º numero"<<endl;
cin>>n2;
cout<< "soma:"<<n1+n2<<endl;
cout<<"sub:"<<n1-n2<<endl;
cout<<"mult:"<<n1*n2<<endl;
cout<<"div int:"<<n1/n2<<endl;
cout<<"res div:"<<n1%n2<<endl;
float divp = (float) n1/n2;
cout<<"div precisa:"<<divp;
return 0;
}
