#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b;
cout << "Enter 2 Numbers";
cin >> a >> b;
a = a * a;
b = b * b;
double sum = a + b;
double sqr = sqrt(sum);
cout << "The Distance is : "<< sqr;
}
