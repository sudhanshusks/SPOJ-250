#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int reverse(int x){
	int y=0;
	while(x>0){
		y= y*10 + x%10;
		x/=10;
	}
	return y;
}

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int a, b;
		cin>>a>>b;
		a= reverse(a);
		b=reverse(b);
		int sum= a+b;
		sum=reverse(sum);
		cout<<sum<<"\n";
	}
	return 0;
}
