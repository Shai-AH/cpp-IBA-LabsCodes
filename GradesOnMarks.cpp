#include <iostream>
using namespace std;
int main(){
    double a,b,c,d,e,avg;
    cout << "Enter Marks of 5 subjects: " << endl;
    cin >> a >> b >> c >> d >> e;
    avg = (a+b+c+d+e)/5.0;
    if((avg <= 100) && (avg >= 90)){
        cout << "A";
    }
    else if((avg <= 89) && (avg >= 80)){
        cout << "B";
    }
    else if((avg <= 79) && (avg >= 70)){
        cout << "C";
    }
    else{
        cout << "F";
    }
