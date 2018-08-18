#include<bits/stdc++.h>
using namespace std;

int main(){
	while(true){
		int n;
		cin>>n;
		if(n==0)break;
		string str;
		cin>>str;
		int len= str.length();
		int row= len/n;
		int ind=0;
		char arr[row][n];
		for(int i=0;i<row;i++){
			if(i%2==0){
				for(int j=0;j<n;j++){
					arr[i][j]= str[ind];
					ind++;
				}
			}
			else{
				for(int j=n-1;j>=0;j--){
					arr[i][j]= str[ind];
					ind++;
				}
			}
		}
		
		string out="";
		for(int i=0;i<n;i++){
			for(int j=0;j<row;j++){
				out+= arr[j][i];
			}
		}
		cout<<out<<"\n";
	}
	return 0;
}
