#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if(a > sqrt(b*c)){
		cout << "Alice";
	}
	else
		cout << "Bob";
}