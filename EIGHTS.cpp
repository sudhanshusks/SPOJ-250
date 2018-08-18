#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		long long int k;
		cin>>k;
		long long int out=180;
		long long int cnt=0;
//		while(cnt < k){
//			long long int temp=1;
//			for(int i=0;i<3;i++){
//				temp *= out;
//				temp= temp%1000;
//			}
//			if(temp == 888){
//				cnt++;
//			}
//			out+=2;
//		}
		out= 192+ (k-1)*250;
		cout<<(out)<<"\n";
	}
	return 0;
}

