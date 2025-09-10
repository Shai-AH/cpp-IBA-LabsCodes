#include <iostream>
#include <algorithm>
using namespace std;
int main(){
double a,b,c;
cout << "Enter 3 integers: ";
cin >> a >> b >> c;
double maxi = max(a, max(b,c));
cout << "The Largest Number is: "<< maxi;
}
