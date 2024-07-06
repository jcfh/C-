#include<iostream>
#include<algorithm>

using namespace std;
int main() {
	int n,m,t,max=0;
	cin >> n >> m;
	int* a = new int[m];
	int* b = new int[m];
	//农夫出价 
	for (int i = 0; i < m;i++)
		cin >> a[i];
	sort(a, a + m);
//	for (int i = 0; i < m;i++)
//		cout << a[i] << " ";
//	cout << endl;
	for (int i = 0; i < m;i++){
		b[i] = a[i]*min(n,(m-i));
		if (max < b[i]) {
			max = b[i];
			t = a[i];
		}
	} 
	cout << t << " "<< max;
	delete[] a;  
    delete[] b;
}