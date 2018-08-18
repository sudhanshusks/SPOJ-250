#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=sqrt(n);i++){
		for(int j=i;j<=n;j++){
			if(i*j<= n)cnt++;
			else break;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
