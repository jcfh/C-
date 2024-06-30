#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a;
	string b;
	cin >> a;
	cin >> b;
	size_t len = b.length();
	for(int i = 0; i<len; i++ ){
		cout << static_cast<char>((int(b[i])+a-97)%26+97);
	}
}