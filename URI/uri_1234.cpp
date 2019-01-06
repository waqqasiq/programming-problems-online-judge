// URI 1234 - Dancing Sentence
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	while(getline(cin,s)){
		int flag=1;
		char ch[s.length()];
		for(int i=0;i<s.length();i++){
			ch[i]=s[i];
		}
	
		for(int i=0;i<s.length();i++){
			if(ch[i]!=32){
				ch[i]=toupper(ch[i]);
				flag=0;
			}//end if
			
			if(flag==0){
				if(ch[i+1]!=32){
					ch[i+1]=tolower(ch[i+1]);
					flag=1;
					if(i<s.length()-1){
					i++;
					}
				}//end if
			}//end if
		}//end for

		for(int i=0;i<s.length();i++){
			cout<<ch[i]<<"";
		}
		cout<<""<<endl;
	}//end while
	return 0;
}//end main