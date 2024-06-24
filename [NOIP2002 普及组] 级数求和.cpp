#include<iostream>
using namespace std;
int main() {
	double Sn=0, k;
	int n = 1;
	cin >> k;
	do {
		Sn += 1.0/n;
		//cout << 1.0/n << " " << Sn <<endl;
		if(Sn<=k)
			n++;
	} while (Sn<=k);
	cout << n;
} 