#include<iostream>

using namespace std;

int main(){
	int T, n, y;
	cin >> T;
	int* b = new int[n] ;
	for (int i = 1; i <= T; i++)
	{
		cin >> n;
		int* a = new int[n] ;
		for (int j = 0; j < n; j++){
			cin >> a[j];
		}
		for (int j = 0; j < n; j++){
			if (a[j] == 0)
				b[i] = 1;
		}
	}
	for (int i = 1; i <= T; i++){
		if (b[i] == 1){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
}