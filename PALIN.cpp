#include<bits/stdc++.h>
using namespace std;

bool check9(string str){
	int n= str.length();
	for(int i=0;i<n;i++){
		if(str[i] != '9'){
			return false;
		}
	}
	return true;
}

string all9palindrome(string str){
	int n=str.length();
	string res="1";
	for(int i=0;i<n;i++){
		res= res+ "0";
	}
	res[n]= '1';
	return res;
}

string nextPalind(string str){
	int n=str.length();
	int idx= (n-1)/2;
	int carry=1;
	for(int i= idx;i>=0;i--){
		int val= str[i]-'0' + carry;
		int rem= val%10;
		str[i]= (char)(rem+'0');
		carry= val/10;
	}
	for(int i=idx;i>=0;i--){
		str[n-i-1]= str[i];
	}
	return str;
}

string greaterPalind(string str){
	int n=str.length();
	int flag=0;
	for(int i=(n-1)/2; i>=0;i--){
		if(str[i] > str[n-i-1]){
			flag=-1;
			break;
		}
		if(str[i]< str[n-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==-1){
		for(int i=(n-1)/2;i>=0;i--){
			str[n-i-1]= str[i];
		}
		return str;
	}
	else{
		string out= nextPalind(str);
		return out;
	}
}


int main(){
	int t;
	cin>>t;
	while(t-->0){
		string k;
		cin>>k;
		int n=k.length();
		string out="";
		bool all9= check9(k);  //done 
		if(all9){
			out= all9palindrome(k);   // done
			cout<<out<<"\n";
			continue;
		}
		bool palind= true;
		for(int i=0;i<n/2;i++){
			if(k[i] != k[n-i-1]){
				palind=false;
				break;
			}
		}
		if(palind){
			out= nextPalind(k);  // done
			cout<<out<<"\n";
			continue;
		}
		
		out= greaterPalind(k);  //
		cout<<out<<"\n";
	}
	return 0;
}
