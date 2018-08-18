#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	while(n>1){
		if(n%2==0){
			n=n/2;
		}
		else{
			cout<<"NIE"<<'\n';
			return 0;
		}
	}
	cout<<"TAK"<<"\n";	
	return 0;
}
