#include<iostream>
#include<stdio.h> 
using namespace std;
int main() {
	double F;
	double C;
	cin >> F;
	if(F>=-459.67){
		C = 5*(F-32)/9;
		printf("%.5f", C);
	} 
}
