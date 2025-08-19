#include <iostream>

using namespace std;

int main()

{
int n1=0;
int n2=20;
int senha=9899;
int pass;
int tentativa=1;
char x ='S';
while(n1<=20){
cout<<"o numero e:"<<n1<<endl;
n1++;
}
while(n2>=0){
cout<<"o numero e:"<<n2<<endl;
n2--;
}

cout<<"escreva sua senha:"<<endl;
cin>>pass;
while(pass!=senha){
    cout<<"digite a senha certa cacete tu so pode errar 3 vezes porra"<<endl;
    cout<<"vc ja tentou:"<<tentativa<<endl;

    tentativa++;
    if(tentativa>3){
        break;
    }
    cin>>pass;
}
if(tentativa<=3){
cout<<"quer parabens por acertar a SUA SENHA? s/n"<<endl;
cin>>x;
if(x=='s'||x=='S'){
    cout<<"tres palavras pa-ra-bens"<<endl;}
else if(x=='N'||x=='n'){
    cout<<"se fude ent"<<endl;}
else{
    cout<<"apenas S/N burro"<<endl;}
}
else{
    cout<<"burro pra klr";}
}
