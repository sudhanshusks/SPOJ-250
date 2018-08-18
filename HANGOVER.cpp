#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		float n;
		cin>>n;
		if(n==0.00) break;
		int cnt=0;
		int num=2;
		float sum=0;
		while(sum<n){
			sum= sum + (1.0/num);
			cnt++;
			num++;
		}
		cout<<cnt<<" card(s)"<<"\n";
	}
	return 0;
}
