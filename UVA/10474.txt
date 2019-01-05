#include <bits/stdc++.h>
using namespace std;
//UVA Where is the Marble?
int main() {
	// your code goes here
	int n;
	int c=1;
	while(cin>>n){
		int q;
		cin>>q;
		if(n==0 && q==0){
			break;
		}
		int arr[n];
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			arr[i]=a;
		}
		sort(arr,arr+n);
		int arr2[q];
		memset(arr2,0,sizeof(arr2));
		for(int i=0;i<q;i++){
			int a;
			cin>>a;
			arr2[i]=a;
		}
		
		cout<<"CASE# "<<c<<":"<<endl;
		for(int i=0;i<q;i++){
			int flag=0;
		int rem=0;
			for(int j=0;j<n;j++){
				
				
				if(arr2[i]==arr[j]){
					flag=1;
					rem=j;
					break;
				}
			}
			if(flag==1){
				
				cout<<arr2[i]<<" found at "<<rem+1<<endl;
			}
			else{
				cout<<arr2[i]<<" not found"<<endl;
			}
		}
		c++;
	}
	
	return 0;
}