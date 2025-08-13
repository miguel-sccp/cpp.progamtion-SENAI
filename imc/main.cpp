#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double peso;
    double altura;


    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " cm"<<endl;
    double imc=peso/pow(altura,2);
    cout<<"seu imc é:"<<imc;

}
