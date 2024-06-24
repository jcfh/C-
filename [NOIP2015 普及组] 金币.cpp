#include<iostream>
using namespace std;
int main() {
	double k, sum=0, d, t;
	cin >> k;
	if (k>=3) {
		for (int i = 1; i < k; i++) {
			if ((i+1.0)/2.0*i>=k) {
				t = i;
				break;
			}
		}
		for (int i = 1; i <= t-1; i++) {
			sum += i*i;
		}
		sum += (k-t/2.0*(t-1))*t;
	}
	else if (k == 2){
		sum = 3;
	}
	else if (k == 1){
		sum = 1;
	}
	cout << sum;
}