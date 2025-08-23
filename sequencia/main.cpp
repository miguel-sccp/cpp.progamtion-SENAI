#include <iostream>

using namespace std;

int main()
{
   int numeros;
   cout<<"oi usuario arrombado"<<endl;
   cout<<"digite q quantidade de vezes q vai ser aplicada"<<endl;
   cin>>numeros;
   int a = 0, b = 1;
    for (int i = 1; i <= numeros; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

   }


