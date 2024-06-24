#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a1,a2,i,sum;
	cin>>a1>>a2;
	for(int i=0;i<a2;i++){
		if(a1!=6&&a1!=7){
			sum+=250;
		}
		if(a1==7){
			a1=0;
		}
		a1++;
	}
	cout<<sum<<endl;
	return 0;
}
