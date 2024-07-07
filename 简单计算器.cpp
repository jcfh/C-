#include<iostream>
using namespace std;
int main(){
	long int a,b;
	string c;
	cin >> a >> b >> c;
	size_t len = c.length();
	//cout << len<<endl;
	if (c[0]=='+'&&len==1) {
		cout << a+b;
	}
	else if (c[0]=='-'&&len==1) {
		cout << a-b;
	}
	else if (c[0]=='*'&&len==1) {
		cout << a*b;
	}
	else if (c[0]=='/'&&len==1){
		if (b==0) {
			cout << "Divided by zero!";
		}
		else {
			cout << a/b;
		} 
	}
	else {
		cout << "Invalid operator!";
	}
}