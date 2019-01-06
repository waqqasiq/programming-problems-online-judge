// URI 1024 - Encryption
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string s;
	int counter=0;
	while(getline(cin,s)){
		
		char ch[s.length()];
		for(int y=0;y<s.length();y++){
			ch[y]=s[y];
		}

		for(int r=0;r<s.length();r++){
			if((ch[r]>=65 && ch[r]<=90) || (ch[r]>=97 && ch[r]<=122)){
				ch[r]+=3;
			}
		}//end for
		int j=s.length()-1;
		char ch2[s.length()];
		for(int e=0;e<s.length();e++){
			ch2[e]=ch[j];
			j--;
		}

		int x=s.length()/2;
		for(int w=x; w<s.length();w++){
			ch2[w]-=1;
		}
		for(int r=0;r<s.length();r++){
			if(r==s.length()-1){
				cout<<ch2[r]<<endl;
				break;
			}//end if
			cout<<ch2[r]<<"";
		}//end for
		counter++;
		if(counter==t+1){
			break;
		}
		
	}//end while
	return 0;
}//end main