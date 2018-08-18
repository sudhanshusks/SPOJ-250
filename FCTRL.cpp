#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int zeros(int x){
	int sum=0;
	while(x>0){
		sum+= x/5;
		x/=5;
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int a;
		cin>>a;
		a= zeros(a);
		cout<<a<<"\n";
	}
	return 0;
}
