#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int x, y;
		cin>>x>>y;
		if(x==0 && y==0){
			cout<<0<<"\n";
		}
		else if(x==y){
			if(x%2==0){
				cout<<2*x<<"\n";
			}
			else{
				cout<<(2*x-1)<<"\n";
			}
		}
		else if(y == x-2){
			if(x%2==0){
				cout<<(2*x-2)<<"\n";
			}
			else{
				cout<<(2*x-3)<<"\n";
			}
		}
		else{
			cout<<"No Number"<<"\n";
		}
	}
	return 0;
}
