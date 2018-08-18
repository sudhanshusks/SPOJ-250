#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		string str;
		cin>>str;
		stack<char> st;
		string out="";
		int len= str.length();
		for(int i=0;i<len;i++){
			if(str[i]>='a' && str[i]<='z'){
				out= out+ str[i];
				continue;
			}
			else if(str[i]=='('){
				st.push(str[i]);
				continue;
			}
			else if(str[i] == ')'){
				while(st.top() != '('){
					out+= st.top();
					st.pop();
				}
				st.pop();
				continue;
			}
			
			if(str[i]=='^'){
				st.push(str[i]);
			}
			else if(str[i]=='/'){
				while(st.top() == '^'){
					out+= st.top();
					st.pop();
				}
				st.push(str[i]);
			}
			else if(str[i]=='*'){
				while(st.top()=='^' || st.top()=='/'){
					out+= st.top();
					st.pop();
				}
				st.push(str[i]);
			}
			else if(str[i]=='-'){
				while(st.top()=='^' || st.top()=='/' || st.top() == '*' ){
					out+= st.top();
					st.pop();
				}
				st.push(str[i]);
			}
			else if(str[i]=='+'){
				while(st.top()=='^' || st.top()=='/' || st.top() == '*' || st.top() =='-'){
					out+= st.top();
					st.pop();
				}
				st.push(str[i]);
			}
		}
		while(!st.empty()){
			out+= st.top();
			st.pop();
		}
		cout<<out<<"\n";
	}
	return 0;
}
