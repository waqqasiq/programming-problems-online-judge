#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	char arr[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	for(int i=0;i<t;i++){
		vector <int>v;
		vector<int>v2;
		long long int n;
		
		cin>>n;
		char ch;
		cin>>ch;
		
		int m;
		cin>>m;
		long long int x=n;
		int flag=0;
		if(m<=10){
			if(x==0){
				cout<<0<<endl;
				flag=1;
			} //end if
			if(flag==0){
				while(x>0){
					v.push_back(x%m);
					x=x/m;
				} //end while
				reverse(v.begin(),v.end());
		
				for(int i=0;i<v.size();i++){
					cout<<v[i]<<"";
				} // end for
				cout<<""<<endl;
			} // end if
		} // end if
		else{
			if(x==0){
				cout<<0<<endl;
				flag=1;
			} //end if
			if(flag==0){
				while(x>0){
					int y=x%m;
					x=x/m;
					if(y>=10){
						v2.push_back(y);
					} 
					else{
						v2.push_back(y);
					} 
				} // end while
				reverse(v2.begin(),v2.end());
				for(int i=0;i<v2.size();i++){
					if(v2[i]>=10){
						cout<<arr[v2[i]-10]<<"";
					}
					else{
						cout<<v2[i]<<"";
					}
				} //end for
			
				cout<<""<<endl;
			} // end if
	
		} // end else
		
	} // end for
	return 0;
} // end main
