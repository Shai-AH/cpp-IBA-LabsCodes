#include <iostream>
#include <algorithm>
using namespace std;
int main(){
double a,b,c;
cout << "Enter 3 integers: ";
cin >> a >> b >> c;
double maxi = max(a, max(b,c));
double mini = min(a, min(b,c));
double res = (a+b+c) - (maxi + mini); //Used to find MID Number, btw Max and Min
cout << mini << res << maxi;
}
