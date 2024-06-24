#include<iostream>
using namespace std;
int main() {
	int L, sum = 0, flag, n=0;
	cin >> L;
	for (int i = 2; i <= L; i++) {
		flag = 0;
		if (i == 2 || i == 3) {
			sum +=i;
			//cout << i << " " << sum << endl;
			cout << i <<endl;
			n++; 
		} 
		else {
			for (int j = 2; j <= i/2; j++) {
				if (i%j == 0 && i != j) {
					flag = 1;
					break;
				}
			}
			if(flag == 0) {
				if (sum+i <= L) {
					cout << i << endl;
					sum += i;
					//cout << sum <<endl;
					n++; 
				}
			}
		}
	}
	cout << n;
}