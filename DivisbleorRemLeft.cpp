#include <iostream>
using namespace std;
int main(){
	int a, b, sum, pro;
	cout << "Enter 2 Numbers" << endl;
	cin >> a >> b;
	sum = a + b;
	pro = a * b;
	cout << "Sum is: " << sum << endl;
	cout << "Product is: " << pro << endl;
	if(pro%sum == 0){ //% Is For Remainder, IF REM = 0 (Then Divisble)
		cout << "Divisble";
	}
	else{
		cout << "Not Divisble";
	}
}
