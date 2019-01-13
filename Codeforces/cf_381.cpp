#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr[i]=a;
	}
	int sum1=0;
	int sum2=0;
	int j=0,k=n-1;
	for(int i=0;i<n;i++){
		if(i%2==0){
			if(arr[j]>arr[k]){
				sum1+=arr[j];
				j++;
			}
			else{
				sum1+=arr[k];
				k--;
			}
			
		}
		else{
			if(arr[j]>arr[k]){
				sum2+=arr[j];
				j++;
			}
			else{
				sum2+=arr[k];
				k--;
			}
			
		}
		
	}
	cout<<sum1<<" "<<sum2<<endl;
	return 0;
}