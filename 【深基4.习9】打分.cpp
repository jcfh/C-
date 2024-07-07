#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	int n,sum=0;
	cin >> n;
	int* a = new int[n];
	for(int i=0; i<=n-1; i++)
	{
		cin >> a[i];
	}
	sort(a,a + n);
	for(int i=1; i<=n-2; i++)
	{
		sum += a[i];
	}
	cout <<fixed << setprecision(2) <<static_cast<double>(sum)/static_cast<double>((n-2));
}