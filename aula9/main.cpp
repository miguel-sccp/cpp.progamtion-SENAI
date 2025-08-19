#include <iostream>

using namespace std;

int main()

{
int n1=0;
int n2=20;
int senha=9899;
int pass;
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
    cout<<"senha incorreta tente novamente"<<endl;
    cin>>pass;
}
cout<<"quer parabens por acertar a SUA SENHA?";
}
