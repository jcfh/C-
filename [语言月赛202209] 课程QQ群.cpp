#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	 double n, k, t, m=0;
	 cin >> n >> k;
	 for(int i=0; i<n; i++){
	 	cin >> t;
	 	if (t == k)
	 		m++;
	 }
	 cout << m;
}