#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		string str;
		cin>>str;
		if(str=="0")break;
		int n=str.length();
		long long int dp[n+1];
		dp[0]=1;
		int dig= str[0]-'0';
		if(dig==0){
			cout<<0<<"\n";
			continue;
		}
		else{
			dp[1]=1;
		}
		
		for(int i=2;i<=n;i++){
			dp[i]=0;
			dig= str[i-1] - '0';
			if(dig !=0){
				dp[i]=dp[i-1];
			}
			int num= dig + (str[i-2]-'0')*10;
			if(num>9 && num<27){
				dp[i]+= dp[i-2];
			}
		}
		cout<<dp[n]<<'\n';
	}
	return 0;
}
