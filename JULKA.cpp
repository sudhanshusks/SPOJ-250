#include<bits/stdc++.h>
#include<string>
using namespace std;


// Returns true if str1 is smaller than str2.
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
    return true;
    if (n2 < n1)
    return false;
 
    for (int i=0; i<n1; i++)
    if (str1[i] < str2[i])
        return true;
    else if (str1[i] > str2[i])
        return false;
 
    return false;
}
 
// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
 
    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
     
    int carry = 0;
 
    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i=0; i<n2; i++)
    {
        // Do school mathematics, compute difference of
        // current digits
         
        int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);
         
        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of larger number
    for (int i=n2; i<n1; i++)
    {
        int sub = ((str1[i]-'0') - carry);
         
        // if the sub value is -ve, then make it positive
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
             
        str.push_back(sub + '0');
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}


string addition(string str1, string str2){
	int len=str1.length();
	int len2= str2.length();
	string out="";
	int carry=0;
	
	if(len < len2) swap(str1, str2);
	len= str1.length();
	len2= str2.length();
	
	for(int i=0;i<len-len2;i++){
		str2=  "0" + str2;
	}
	
	for(int i=len-1;i>=0;i--){
		int val1= str1[i]-'0';
		int val2= str2[i]-'0';
		int sum= val1 + val2+ carry;
		carry= sum/10;
		int rem=sum%10;
		out= to_string(rem) + out;
	}
	
	if(carry !=0){
		out= to_string(carry) + out;
		carry/=10;
	}
	return out;
}


string divide(string str, int num){
	int len= str.length();
	string out="";
	int carry=0;
	int i=0;
	int val = str[i] - '0';
    while (val < num)
       val = val * 10 + (str[++i] - '0');
       
	while(i<len){
		int temp= val/num;
		carry= val%num;
		out= out+ to_string(temp);
		val= str[++i]-'0' + 10*carry;
	}

	if (out.length() == 0)
       return "0";
	return out;
}


int main(){
	int t=10;
	while(t-->0){
		string sum;
		string extra;
		cin>>sum;
		cin>>extra;
		string diff= findDiff(sum, extra);
		string natalia= divide(diff, 2);
		string klaudia= addition(natalia, extra);
		int len= natalia.length();
		int i=0;
		for(i=0;i<len;i++){
			if(natalia[i] !='0') break;
		}
		natalia= natalia.substr(i, len);
		
		i=0;
		len=klaudia.length();
		for(i=0;i<len;i++){
			if(klaudia[i] !='0') break;
		}
		klaudia= klaudia.substr(i, len);
		//cout<<diff<<"* "<<natalia<<"**"<<klaudia<<"***";
		cout<<klaudia<<"\n";
		cout<<natalia<<"\n";
	}
	return 0;
}
