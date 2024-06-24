#include<iostream>
using namespace std;
int main() {
	unsigned long int N;
	cin >> N;
	while (N!=1) {
		if (0 == N%2) {
			cout << N << "/" << 2 << "=" << N/2 <<endl;
			N = N/2;
		} 
		else {
			cout << N << "*" << 3 << "+" << 1 << "=" << N * 3 + 1 <<endl;
			N = N * 3 + 1;
		}
	}
	cout << "End" ;
}