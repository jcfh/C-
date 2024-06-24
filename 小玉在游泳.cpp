#include<iostream>
using namespace std;
int main(){
	int i = 0;
	double s, l1=2, sum=0; 
	cin >> s;
	while (sum < s) {
		sum += l1;
		i++;
		l1 *= 0.98;
	}
	cout << i;
}