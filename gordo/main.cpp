#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    int idade;
    float peso;

    cout << "digite seu nome paizao" << endl;
    getline(cin, nome);
    cout << "digite sua idade tbm" << endl;
    cin >> idade;
    cout << "digite qnt tu pesa" << endl;
    cin >> peso;

    if(peso >= 100 && idade >= 60){
        cout << nome<< "vc esta no grupo de risco, dirija-se ao posto de saude mais proximo" << endl;
    } else {
        cout << nome << ", ta tudo beleza pai" << endl;
    }

    return 0;
}
