#include<bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		int out=(n*(n+1)*(2*n+1))/6;
		cout<<out<<"\n";
	}
	return 0;
}
