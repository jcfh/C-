#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n, R, m;
	int max_value; 
	cin >> n >> R;
	int* a = new int[n]; // 动态分配一个大小为n的整数数组
	int* b = new int[n]; 
	for (int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	for	(int i = 0; i < n; i++){
		if (b[i]>R){
			a[i] = 0;
		}
	}
	max_value = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] > max_value){
			max_value = a[i];
			m = i;
		}
	}
	//cout << m <<endl; 
	cout << a[m];
	delete[] a;
	delete[] b;
}