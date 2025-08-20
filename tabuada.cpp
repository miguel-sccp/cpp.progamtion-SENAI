#include <iostream>
using namespace std;

int main() {
int n1;
int mult = 1;
cout << "Escreva um numero: ";
cin >> n1;
while (mult <= 10) {cout << n1 << " x " << mult << " = " << n1 * mult << endl;
mult++;
}
}
