#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a;
	cin >> a;
	if(a>=1 && a<=7){
		if(a==1 || a==3 || a==5){
			cout << "NO";
		}
		else
			cout << "YES";
	}
}