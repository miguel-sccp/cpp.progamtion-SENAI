#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, cargo ;
    float sal_hr, carga_horaria, qnt_dia,sal_dia, sal_mes, desconto_inss, sal_liq;
    char repetir;
do{
    cout << "ola novamente usuario Digite seu nome:" << endl;
    getline(cin, nome);

    cout << "Digite seu cargo:" << endl;
    getline(cin, cargo);

    cout << "Quanto você recebe por hora?" << endl;
    cin >> sal_hr;

    cout << "Quantas horas vc trabalha por dia?" << endl;
    cin >> carga_horaria;

    cout << "Quantos dias você trabalha por mes" << endl;
    cin >> qnt_dia;

    sal_dia=sal_hr*carga_horaria;
    sal_mes=sal_dia*qnt_dia;
    desconto_inss = sal_mes * 0.05;
    sal_liq = sal_mes - desconto_inss;

    cout << "Salario diário: R$ " << sal_dia << endl;
    cout << "Salario mensal: R$ " << sal_mes << endl;
    cout << "Desconto do INSS (5%): R$ " << desconto_inss << endl;
    cout << "Salario líquido: R$ " << sal_liq << endl;

    cout<<"deseja repetir(S/N)"<<endl;
    cin >> repetir;
    }while(repetir == 's' || repetir == 'S');
}


