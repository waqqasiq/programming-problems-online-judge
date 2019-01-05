#include <bits/stdc++.h>
using namespace std;
//Codeforces 450A Jzzhu and Children
int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	vector<int>v;
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<n;i++){
		if(v[i]%m==0){
			arr[i]=v[i]/m;
		}
		else{
			arr[i]=v[i]/m;
			arr[i]++;
		}
	}
	int j=0;
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(max<=arr[i]){
			max=arr[i];
			j=i;
		}
	}
	cout<<j+1<<endl;
	return 0;
}