#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
int lingagule[10];
int topa;
int x;

lingagule[0]=20;
lingagule[1]=10;
lingagule[2]=50;
lingagule[3]=60;
lingagule[4]=90;
lingagule[5]=90;
lingagule[6]=90;
lingagule[7]=90;
lingagule[8]=90;
lingagule[9]=90;
  string putula[5];
putula[0] = "de";
putula[1] = "para";
putula[2] = "com";
putula[3] = "sem";
putula[4] = "em";

for (topa=0; topa<10;topa++)
{cout<<lingagule[topa]<<endl;}
for(x=0;x<5;x++){
cout<<putula[x]<<endl;}
return 0;
}
