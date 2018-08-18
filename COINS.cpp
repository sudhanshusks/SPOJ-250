#include<bits/stdc++.h>
using namespace std;

int arr[1000000];
long long int ans=0;

void solve(int n){
	if(n<1000000 ){
		ans= ans + arr[n];
		return;
	}
	solve(n/2);
	solve(n/3);
	solve(n/4);
	return;
}


int main(){
	int n;
	for(int i=0;i<12;i++){
		arr[i]=i;
	}
	for(int i=12;i<1000000;i++){
		arr[i]= arr[i/2]+ arr[i/3] + arr[i/4];
	}
	while(scanf("%d",&n)!=EOF){
		ans=0;
		solve(n);
		cout<<ans<<"\n";
	}
	return 0;
}
