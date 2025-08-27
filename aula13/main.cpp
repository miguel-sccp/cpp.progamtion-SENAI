#include <iostream>
using namespace std;
void sair(){cout<<"vc quer digitar outra nota? s/n"<<endl;
}
void putaria() {
    cout << "Fala viado, bem-vindo aí!\n";
    cout << "Digite 3 notas suas: ";

}
float merda(float cuzao, float imb, float merda) {
    return (cuzao + imb + merda) / 3;
}

int main() {
float ruim=0;
char loop;
do{

float klr;
float a, n, t;
sair:
putaria();
cin >> a >> n >> t;
klr = merda(a, n, t);
if (klr>=6){
        cout << "A sua média é " << klr << endl;
    cout<<"apesar dessa nota de merda vc passou"<<endl;
}
else{
    cout << "A sua média é " << klr << endl;
    cout<<"vc nn consegue passar, mesmo a media sendo 6 pqp"<<endl;
}
sair();
cin>>loop;
}while(loop=='s'||loop=='S');
return 0;
}
