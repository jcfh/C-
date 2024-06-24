#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	double sum, h;
	cin >> h;
	sum = h;
	for(int i = 0; i < 9; i++){
		h /= 2;
		sum += h*2;
	}
	//sum += h/2;
	cout << sum << endl;
	cout << h/2;
}