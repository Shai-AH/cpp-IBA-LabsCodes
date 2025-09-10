#include <iostream>
#include <algorithm>
#include <cstdlib> //rand() Library
using namespace std;
int main(){
double a,b,c;
a = rand()/(double)RAND_MAX; //Generates Random Number btw 0-1 eg. 0.001 or 0.98
b = rand()/(double)RAND_MAX; //RAND_MAX is Maximum constant number rand() Func thinks of
c = rand()/(double)RAND_MAX;
cout << "The Average is: " << (a + b + c)/3.0 << endl;
cout << "The Max Number is: " << max(a , max(b,c)) << endl;
cout << "The Min Number is: " << min(a , min(b,c)) << endl;
}
