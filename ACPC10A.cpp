#include<bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		int a, b, c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0) break;
		
		int d1= b-a;
		int d2= c-b;
		if(d1== d2){
			cout<<"AP "<<(c+d2)<<"\n";
			continue;
		}
		int r1= b/a;
		cout<<"GP "<<(c*r1)<<"\n";
	}
	return 0;
}
