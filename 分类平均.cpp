#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n, k;
	int pluar=0, single=0, a=0, b=0;
	cin >> n >> k;
	for (int i=1; i<=n; i++) {
		if ( i%k == 0){
			pluar += i;
			a++;
		} else {
			single += i;
			b++;
		}
	}
	cout << fixed << setprecision(1) << static_cast<double>(pluar)/a << " " << fixed << setprecision(1) << static_cast<double>(single)/b; 
}