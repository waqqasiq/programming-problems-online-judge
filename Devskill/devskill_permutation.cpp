#include <bits/stdc++.h>
using namespace std;

int factorial(int n);


int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		int arr[123];
		memset(arr,0,sizeof(arr));
		
		for(int i=0;i<s.size();i++){
			char ch=s[i];
			int x=(int)ch;
			arr[x]++;
		} // end for
		int counter=0;
		for(int i=0;i<123;i++){
			if(arr[i]>0){
				counter++;
			}
		} //end for
	
		int arr2[counter];
		int j=0;
		memset(arr2,0,sizeof(arr2));
		for(int i=0;i<123;i++){
			if(arr[i]>0){
				arr2[j]=arr[i];
				j++;
			}
		} // end for
		for(int i=0;i<counter;i++){
			if(arr2[i]>1){
				int r=arr2[i];
				arr2[i]=factorial(r);
			}
		} // end for
		
		long long int h=factorial(s.size()); 
		
		for(int i=0;i<counter;i++){
			h=h/(factorial(arr2[i]));
		}
		cout<<h<<endl;
	} // end for
	return 0;
} // end main

// Function to perform factorial of a number
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
