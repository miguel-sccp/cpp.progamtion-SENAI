#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
int numero[11];
int coisa;
numero[0]=0;
numero[1]=1;
numero[2]=2;
numero[3]=3;
numero[4]=4;
numero[5]=5;
numero[6]=6;
numero[7]=7;
numero[8]=8;
numero[9]=9;
numero[10]=10;
do{

    for (coisa=0; coisa<11;coisa++){
        {cout<<numero[coisa]<<endl;}
    Sleep(500);
    system("cls");
    }

}while(true);
}
