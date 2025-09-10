#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter y" << endl;
	cin >> y;
	if((x == 0) && (x == 0)){
		cout << "Origin";
	}
	else if((x == 0) && (y != 0)){
		cout << "x Intercept";
	}
	else if((y == 0) && (x != 0)){
		cout << "y Intercept";
	}
	else if(x > 0){
		if(y > 0){
			cout << "First Quadrant";
		}
		else{
			cout << "Fourth Quadrant";
		}
	}
	else if(y > 0){
		if(x < 0){
			cout << "Second Quadrant";
		}
	}
	else{
		cout << "Third Qudrant";
	}
}
