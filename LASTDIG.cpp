#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int a,b;
		cin>>a>>b;
		if(a==0){
			cout<<0<<"\n";
			continue;
		}
		if(b==0){
			cout<<1<<"\n";
			continue;
		}
		int arr[10];
		for(int i=0;i<10;i++) arr[i]=0;
		
		int temp= a%10;
		arr[temp]++;
		int cnt=1, diff=0;
		while(true){
			cnt++;
			temp= (temp*a)%10;
			if(arr[temp]==1){
				diff= cnt-1;
				break;
			}
			arr[temp]++;
		}
		int val=(b-1)%diff;
		//cout<<diff<<"*"<<val<<"**";
		int out=a;
		for(int i=1;i<=val;i++){
			out*= a;
			out= out%10;
		}
		cout<<out%10<<"\n";
	}
	return 0;
}
