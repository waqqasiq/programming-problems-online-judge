#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	int x=n;
	int y=n;
	int k;
	cin>>k;
 
	int counter=0;
	int arr[k];
	memset(arr,0,sizeof(arr));
	int i=2;
	while(i<=y){
 
		if(n%i==0){
			arr[counter]=i;
			
			if(counter==k-1){
				arr[counter]=n;
			}
			n=n/i;
			counter++;
			i=2;
		}
		
		else{
			i++;
		}
		
 
		if(counter>k){
			break;
		}
		
 
	}
	
	long long int prod=1;
	for(int i=0;i<k;i++){
		
		prod=prod*arr[i];
	}

	int flag=0;
	if(prod==x){
		flag=1;
	}
	if(flag==1){
		for(int i=0;i<k;i++){
		
	cout<<arr[i]<<" ";
	}
	}
	else{
		cout<<-1<<"";
	}
	cout<<""<<endl;
	return 0;
}