#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (static_cast<int>(a)%2 == 1){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
//	cout << int(a);
}