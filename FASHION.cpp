#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; 
	cin>>t;
	while(t-- >0){
		int n;
		cin>>n;
		
		int women[n];
		for(int i=0;i<n;i++){
			cin>>women[i];
		}
		sort(women, women+n);
		int men[n];
		for(int i=0;i<n;i++){
			cin>>men[i];
		}
		sort(men, men+n);
		int sum=0;
		for(int i=0;i<n;i++){
			int pdt=women[i]*men[i];
			sum = sum + pdt;
		}
		cout<<sum<<"\n";
	}
	return 0;
}

