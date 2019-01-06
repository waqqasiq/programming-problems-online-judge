// URI 1238 - Combiner
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		string b;
		cin>>b;
		char ch[a.length()+b.length()];
		int x=a.length()+b.length();
		int j=0;
		
		if(b.length()>a.length()){
			for( int i=0;i<2*(a.length());i++){
				ch[i]=a[j];
				i++;
				ch[i]=b[j];
				j++;
			}//end for
			for(int i=2*a.length();i<x;i++){
				ch[i]=b[j];
				j++;
			}//end for
		}//end if
		else if(b.length()<a.length()){
			for( int i=0;i<2*(b.length());i++){
				ch[i]=a[j];
				i++;
				ch[i]=b[j];
				j++;
			}//end for
			for(int i=2*b.length();i<x;i++){
				ch[i]=a[j];
				j++;
			}//end for
		}
		else{
			for( int i=0;i<x;i++){
				ch[i]=a[j];
				i++;
				ch[i]=b[j];
				j++;
			}//end for
		}//end else
	
		for(int i=0;i<x;i++){
			cout<<ch[i]<<"";
		}
		cout<<""<<endl;
	}//end outer for
	return 0;
}//end main