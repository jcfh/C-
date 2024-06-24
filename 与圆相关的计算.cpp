#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	double r;
	double R, c, s;
	cin >> r;
	if(r>0 && r<=10000){
		R = 2*r;
		c = 3.14159*R;
		s = 3.14159*r*r;
	}
	//cout << R << " " << c << " " << s;
	printf("%.4f %.4f %.4f", R, c, s);
}
