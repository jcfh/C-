#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i+1; j++)
		{
			m++;
			if (m < 10) {
				cout << 0 << m;
			} else {
				cout << m;
			}
		}
		cout << endl; 
	}
}