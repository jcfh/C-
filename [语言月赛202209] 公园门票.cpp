#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int x, y;
	double sum=0;
	cin >> x >> y;
	if(x>=y){
		sum = y*90 + (x-y)*60;
	}
	else{
		sum = x*90 + (y-x)*40;
	}
	cout << sum;
}