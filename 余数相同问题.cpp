#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	for (int i=2; i<max(max(a, b), max(b, c)); i++){
		if (a%i == b%i && b%i == c%i){
			cout << i;
			break;
		}
	}
} 