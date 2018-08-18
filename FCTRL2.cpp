#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

string multiply(int num, string str2){
	string res="";
	int len= str2.length();
	int carry=0;
	for(int i=len-1;i>=0;i--){
		int val= str2[i]-'0';
		val= val*num + carry;
		int rem= val%10;
		res= to_string(rem)+ res;
		carry=val/10;
	}
	while(carry){
		int temp= carry%10;
		res= to_string(temp)+ res;
		carry/=10;
	}
	
	return res;
}

string factorial(int x){
	int cnt=2;
	string res="1";
	while(cnt<=x){
		//str1= to_string(cnt);
		res= multiply(cnt, res);
		cnt++;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int a;
		cin>>a;
		string res= factorial(a);
		cout<<res<<"\n";
	}
	return 0;
}
