#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(){
	int t;
	string str, test;
	getline(cin,test);
	stringstream temp(test);
	temp>>t;
	while(t-- >0){
		while(true){
			getline(cin, test);
			if(test == "\n") continue;
			else break;
		}
		getline(cin, str);
		vector<string> tokens;
		stringstream check(str);
		string temp;
		while(getline(check, temp, ' ')){
			tokens.push_back(temp);
			//cout<<temp<<"*";
		}
		
		string out="";
		int sum=0, a=0, b=0;
		if(tokens[0].find("machula") != string::npos){
			stringstream temp(tokens[4]);
			temp>>sum;
			stringstream temp2(tokens[2]);
			temp2>>b;
			a= sum -b;
			out= to_string(a)+ " + " + tokens[2] + " = "+ tokens[4];
		}
		else if(tokens[2].find("machula") != string::npos){
			stringstream temp(tokens[4]);
			temp>>sum;
			stringstream temp2(tokens[0]);
			temp2>>b;
			a= sum -b;
			out= tokens[0] + " + " + to_string(a) + " = "+ tokens[4];
		}
		else{
			stringstream temp(tokens[0]);
			temp>>a;
			stringstream temp2(tokens[2]);
			temp2>>b;
			sum = a+ b;
			out= tokens[0 ]+ " + " + tokens[2] + " = "+ to_string(sum);
		}
		
		cout<<out<<"\n";

	}
	return 0;
}
