#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t-->0){
		long long int n;
		cin>>n;
		long long int num;
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>num;
			sum+= num%n;
			sum= sum%n;
		}
		if(sum%n == 0){
			cout<<"YES"<<'\n';
		}
		else{
			cout<<"NO"<<'\n';
		}
	}
	return 0;
}
