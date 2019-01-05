#include <bits/stdc++.h>
using namespace std;
//UVA horror dash
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		int arr[n];
		memset(arr,0,sizeof(arr));
		//cout<<n<<endl;
		int b;
		scanf("%d",&b);
		arr[0]=b;
		int m=b;
		//cout<<arr[0]<<endl;
		
		for(int j=1;j<n;j++){
			int a;
			scanf("%d",&a);
			arr[j]=a;
			m=max(m,arr[j]);
			
		}
		printf("Case %d: %d\n",i,m);
		//printf("%d\n",m);
		
		
	}
	return 0;
}