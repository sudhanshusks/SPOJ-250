#include<bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==-1) break;
		
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+= arr[i];
		}
		if(sum%n!=0){
			cout<<-1<<"\n";
		}
		else{
			int val= sum/n;
			int out=0;
			for(int i=0;i<n;i++){
				if(arr[i] < val){
					out+= (val - arr[i]);
				}
			}
			cout<<out<<"\n";
		}
	}
	return 0;
}
